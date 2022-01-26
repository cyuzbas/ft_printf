/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   write_idu.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/03 14:26:00 by cyuzbas       #+#    #+#                 */
/*   Updated: 2021/11/08 14:16:53 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	write_id(va_list args)
{
	int		a;
	int		size;
	char	*number;

	a = va_arg(args, int);
	number = ft_itoa(a);
	if (!number)
		return (-1);
	size = ft_strlen(number);
	write(1, number, size);
	free(number);
	return (size);
}

int	write_u(va_list args)
{
	unsigned int	a;
	int				size;
	char			*number;

	a = va_arg(args, unsigned int);
	number = ft_utoa(a);
	if (!number)
		return (-1);
	size = ft_strlen(number);
	write(1, number, size);
	free(number);
	return (size);
}
