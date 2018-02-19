/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strmapi.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ythollet <ythollet@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/19 18:29:17 by ythollet     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/19 18:29:17 by ythollet    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

/*
** Applique la fonction f à chaque caractère de la chaine de caractères
** passée en paramètre en précisant son index pour créer une nouvelle chaine
** “fraiche” (avec malloc(3)) résultant des applications successives
** de f.
**
** Param :
** La chaine de caractères sur laquelle itérer.
** La fonction à appeler sur chaque caractère de s en précisant
** son index.
**
** Retour :
** La chaine “fraiche” résultant des applications successives de f.
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*str;

	if (s)
	{
		i = ft_strlen(s);
		if (!(str = (char *)malloc(sizeof(char) * (i + 1))))
			return (NULL);
		i = 0;
		while (s[i] != '\0')
		{
			str[i] = f(i, s[i]);
			i++;
		}
		str[i] = '\0';
		return (str);
	}
	return (NULL);
}
