/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_wstrsub_free.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ythollet <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/02/19 12:55:13 by ythollet     #+#   ##    ##    #+#       */
/*   Updated: 2018/02/19 12:55:30 by ythollet    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

/*
** Alloue et retourne la copie “fraiche” d’un
** tronçon de la chaine de caractères passée en paramètre. Le
** tronçon commence à l’index start et à pour longueur len.
** La chaine de caractère s est detruite.
**
** Param :
** 1.La chaine de caractères dans laquelle chercher le tronçon à copier.
** 2.L’index dans la chaine de caractères où débute le tronçon à copier.
** 3.La longueur du tronçon à copier.
**
** Remarque :
** ft_strnew se prend un +1 pour reserver une dernière case pour '\0' (l42)
*/

wchar_t		*ft_wstrsub_free(wchar_t *s, unsigned int start, size_t len)
{
	wchar_t *str;

	if (s)
	{
		if (!(str = ft_wstrnew(len)))
		{
			free(s);
			return (NULL);
		}
		while (start--)
			s++;
		ft_wstrncpy(str, s, len);
		free(s);
		str[len] = '\0';
		return (str);
	}
	return (NULL);
}
