/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_striter.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ythollet <ythollet@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/19 18:28:47 by ythollet     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/19 18:28:47 by ythollet    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

/*
** Applique la fonction f à chaque caractère de la chaine de
** caractères passée en paramètre en précisant son index en pre-
** mier argument. Chaque caractère est passé par adresse à la
** fonction f afin de pouvoir être modifié si nécéssaire
**
** Param :
** 1.La chaine de caractères sur laquelle itérer
** 2.La fonction à appeler sur chaque caractère de s et son index
*/

void	ft_striter(char *s, void (*f)(char *))
{
	size_t	i;

	i = 0;
	if (s && f)
	{
		while (s[i] != '\0')
		{
			f(&s[i]);
			i++;
		}
	}
}
