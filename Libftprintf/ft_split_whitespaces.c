/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_split_whitespaces.c                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ythollet <ythollet@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/19 18:28:05 by ythollet     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/19 18:28:05 by ythollet    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_sep(char c)
{
	if (c == '\t' || c == '\n' || c == ' ')
		return (1);
	return (0);
}

int		nbr_words(char *str)
{
	int n;
	int words;

	n = 0;
	words = 0;
	while (str[n])
	{
		while (ft_sep(str[n]) && str[n] != 0)
			n++;
		if (str[n] != 0)
			words++;
		while (!(ft_sep(str[n])) && str[n] != 0)
			n++;
	}
	return (words);
}

char	**size_tab(char *str, int words)
{
	int		n;
	char	**tab;
	int		n_word;
	int		len;

	tab = malloc(sizeof(char *) * (words + 1));
	n_word = 0;
	n = 0;
	while (str[n])
	{
		while (ft_sep(str[n]) && str[n] != 0)
			n++;
		if (str[n] != 0)
			n_word++;
		len = 0;
		while (!(ft_sep(str[n])) && str[n] != 0)
		{
			n++;
			len++;
		}
		if (len > 0)
			tab[n_word - 1] = malloc(sizeof(char) * (len + 1));
	}
	tab[n_word] = NULL;
	return (tab);
}

char	**ft_split_whitespaces(char *str)
{
	char	**tab;
	int		n;
	int		n_word;
	int		i;

	tab = size_tab(str, nbr_words(str));
	n_word = 0;
	n = 0;
	while (str[n])
	{
		while (ft_sep(str[n]) && str[n] != 0)
			n++;
		if (str[n] != 0)
			n_word++;
		i = 0;
		while (!(ft_sep(str[n])) && str[n] != 0)
			tab[n_word - 1][i++] = str[n++];
		if (str[n] != 0)
			tab[n_word - 1][i] = '\0';
	}
	return (tab);
}
