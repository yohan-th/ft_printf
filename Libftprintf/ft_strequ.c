/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strequ.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ythollet <ythollet@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/19 18:28:44 by ythollet     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/19 18:28:44 by ythollet    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

/*
** Compare lexicographiquement s1 et s2. Si les deux chaines
** sont égales, la fonction retourne 1, ou 0 sinon.
**
** Param :
** 1.La première des deux chaines à comparer.
** 2.La seconde des deux chaines à comparer
**
** Retour :
** 1 ou 0 selon que les deux chaines sont égales ou non.
*/

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	if (s1 && s2)
		return (!ft_strcmp(s1, s2));
	return (0);
}
