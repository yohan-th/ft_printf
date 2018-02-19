/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ythollet <ythollet@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/19 18:29:00 by ythollet     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/19 18:29:00 by ythollet    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

/*
** Ajoute {size} octet de {src} dans {dst} et renvoi la taille de {dst} + {src}
** Aucune idée à quoi peut servir la valeur retournée
*/

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	size_dst;
	size_t	size_src;
	size_t	temp_size;

	temp_size = size;
	size_dst = 0;
	size_src = ft_strlen(src);
	while (size != 0 && *dst != '\0')
	{
		size--;
		size_dst++;
		dst++;
	}
	if (size == 0)
		return (temp_size + size_src);
	while (size > 1 && *src != '\0')
	{
		*dst++ = *src++;
		size--;
	}
	*dst = '\0';
	return (size_dst + size_src);
}
