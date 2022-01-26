/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/03 14:16:19 by cyuzbas       #+#    #+#                 */
/*   Updated: 2021/11/08 15:19:36 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	absolute(int n)
{
	if (n > 0)
		return (n);
	else
		return (-n);
}

static int	find_size(int n)
{
	int	size;

	size = 0;
	while (n)
	{
		n /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	int		size;
	char	*ascii;	

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	size = find_size(n);
	if (n < 0)
		size++;
	ascii = (char *)malloc(sizeof(char) * (size + 1));
	if (!ascii)
		return (NULL);
	ascii[size] = 0;
	size--;
	if (n < 0)
		ascii[0] = '-';
	n = absolute(n);
	while (n > 0)
	{
		ascii[size] = n % 10 + '0';
		n /= 10;
		size--;
	}
	return (ascii);
}
