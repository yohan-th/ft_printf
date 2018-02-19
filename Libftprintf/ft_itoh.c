/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itoh.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ythollet <ythollet@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/22 11:50:35 by ythollet     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/22 11:50:35 by ythollet    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

/*
** Convert integer to hexadecimal.
*/

void	ft_convert_itoh(char *hex, long long n)
{
	long long	rem;

	while (n > 0)
	{
		rem = n % 16;
		if (rem >= 10 && rem <= 15)
			*hex++ = rem + 87;
		else
			*hex++ = rem + 48;
		n /= 16;
	}
}

char	*ft_itoh(long long n)
{
	char	*hex;
	char	*str;

	if (!(hex = (char *)malloc(sizeof(char *) * 40)))
		return (NULL);
	if (!n)
		hex[0] = '0';
	else
		ft_convert_itoh(hex, (unsigned long long)n);
	hex[ft_strlen(hex)] = '\0';
	ft_strrev(hex);
	str = (char *)malloc(sizeof(*str) * ft_strlen(hex) + 1);
	ft_strcpy(str, hex);
	free(hex);
	return (str);
}
