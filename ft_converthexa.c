/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_converthexa.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/03 14:16:14 by cyuzbas       #+#    #+#                 */
/*   Updated: 2021/11/08 15:30:44 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static unsigned int	find_size(unsigned long n)
{
	unsigned int	size;

	size = 0;
	while (n)
	{
		n /= 16;
		size++;
	}
	return (size);
}

char	*hexa_lowercase(char *hexadecimal)
{
	int	i;

	if (!hexadecimal)
		return (NULL);
	i = 0;
	while (hexadecimal[i])
	{
		if (hexadecimal[i] >= 'A' && hexadecimal[i] <= 'Z')
			hexadecimal[i] += ('a' - 'A');
		i++;
	}
	return (hexadecimal);
}

char	*ft_converthexa(unsigned long n)
{
	unsigned long	remainder;
	int				size;
	char			*hexadecimal;

	if (n == 0)
		return (ft_strdup("0"));
	size = find_size(n);
	hexadecimal = (char *)malloc(sizeof(char) * (size + 1));
	if (!hexadecimal)
		return (NULL);
	hexadecimal[size] = 0;
	size--;
	while (n)
	{
		remainder = n % 16;
		if (remainder < 10)
			hexadecimal[size] = '0' + remainder;
		else
			hexadecimal[size] = 'A' + remainder - 10;
		n /= 16;
		size--;
	}
	return (hexadecimal);
}
