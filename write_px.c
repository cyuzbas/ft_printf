/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   write_px.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/03 14:25:56 by cyuzbas       #+#    #+#                 */
/*   Updated: 2021/11/08 15:37:42 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	write_xupper(va_list args)
{
	unsigned int	a;
	int				size;
	char			*hexadecimal;

	a = va_arg(args, unsigned int);
	hexadecimal = ft_converthexa(a);
	if (!hexadecimal)
		return (-1);
	size = ft_strlen(hexadecimal);
	write(1, hexadecimal, size);
	free(hexadecimal);
	return (size);
}

int	write_x(va_list args)
{
	unsigned int	a;
	int				size;
	char			*hexadecimal;

	a = va_arg(args, unsigned int);
	hexadecimal = ft_converthexa(a);
	hexadecimal = hexa_lowercase(hexadecimal);
	if (!hexadecimal)
		return (-1);
	size = ft_strlen(hexadecimal);
	write(1, hexadecimal, size);
	free(hexadecimal);
	return (size);
}

int	write_p(va_list args)
{
	unsigned long	a;
	int				size;
	char			*hexadecimal;

	a = va_arg(args, unsigned long);
	hexadecimal = ft_converthexa(a);
	hexadecimal = hexa_lowercase(hexadecimal);
	if (!hexadecimal)
		return (-1);
	size = ft_strlen(hexadecimal);
	write(1, "0x", 2);
	write(1, hexadecimal, size);
	size += 2;
	free(hexadecimal);
	return (size);
}
