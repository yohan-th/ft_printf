/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_digitlen.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ythollet <ythollet@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/20 17:01:50 by ythollet     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/20 17:01:50 by ythollet    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int					ft_digitlen(intmax_t n)
{
	size_t				res;

	res = 0;
	if (n < 0)
	{
		res++;
		n *= -1;
	}
	if (n > 9)
	{
		res++;
		return (res + ft_digitlen(n / 10));
	}
	res++;
	return (res);
}
