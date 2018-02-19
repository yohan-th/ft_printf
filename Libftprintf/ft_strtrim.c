/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strtrim.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ythollet <ythollet@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/19 18:30:05 by ythollet     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/19 18:30:05 by ythollet    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

/*
** Alloue (avec malloc(3)) et retourne une copie de la chaine
** passée en paramètre sans les espaces blancs au debut et à la
** fin de cette chaine. On considère comme espaces blancs les
** caractères ’ ’, ’\n’ et ’\t’. Si s ne contient pas d’espaces
** blancs au début ou à la fin, la fonction renvoie une copie de
** s. Si l’allocation echoue, la fonction renvoie NULL
**
** Param :
** 1.La chaine de caractères à trimmer.
** 2.La chaine de caractère “fraiche” trimmée ou bien une copie
** de s sinon.
**
** Remarque :
** l43 renvoi un chaine une chaine vide (avec \0) pour le cas où {s} est
** composé uniquement d'espace
*/

char	*ft_strtrim(char const *s)
{
	char	*str;
	size_t	bgn;
	size_t	end;

	bgn = 0;
	if (!s)
		return (NULL);
	while ((s[bgn] == '\t' || s[bgn] == '\n' || s[bgn] == ' ') && s[bgn])
		bgn++;
	if (s[bgn] == '\0')
		return (ft_strnew(1));
	end = ft_strlen(s) - 1;
	while ((s[end] == '\t' || s[end] == '\n' || s[end] == ' ') && s[end])
		end--;
	end = end - bgn + 1;
	str = ft_strsub(s, bgn, end);
	return (str);
}
