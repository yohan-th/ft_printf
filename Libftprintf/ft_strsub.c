/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strsub.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ythollet <ythollet@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/19 18:30:00 by ythollet     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/19 18:30:00 by ythollet    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

/*
** Alloue et retourne la copie “fraiche” d’un
** tronçon de la chaine de caractères passée en paramètre. Le
** tronçon commence à l’index start et à pour longueur len. Si
** start et len ne désignent pas un tronçon de chaine valide,
** le comportement est indéterminé. Si l’allocation échoue, la
** fonction renvoie NULL.
**
** Param :
** 1.La chaine de caractères dans laquelle chercher le tronçon à copier.
** 2.L’index dans la chaine de caractères où débute le tronçon à copier.
** 3.La longueur du tronçon à copier.
**
** Remarque :
** ft_strnew se prend un +1 pour reserver une dernière case pour '\0' (l42)
*/

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *str;

	if (s)
	{
		if (!(str = ft_strnew(len)))
			return (NULL);
		while (start--)
			s++;
		ft_strncpy(str, s, len);
		str[len] = '\0';
		return (str);
	}
	return (NULL);
}
