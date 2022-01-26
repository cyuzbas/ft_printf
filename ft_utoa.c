/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_utoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/03 14:26:12 by cyuzbas       #+#    #+#                 */
/*   Updated: 2021/11/08 15:36:58 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	find_size(unsigned int n)
{
	unsigned int	size;

	size = 0;
	while (n)
	{
		n /= 10;
		size++;
	}
	return (size);
}

char	*ft_utoa(unsigned int n)
{
	unsigned int	size;
	char			*ascii;	

	if (n == 0)
		return (ft_strdup("0"));
	size = find_size(n);
	ascii = (char *)malloc(sizeof(char) * (size + 1));
	if (!ascii)
		return (NULL);
	ascii[size] = 0;
	size--;
	while (n > 0)
	{
		ascii[size] = n % 10 + '0';
		n /= 10;
		size--;
	}
	return (ascii);
}
