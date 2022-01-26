/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   write_cs.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/03 14:26:04 by cyuzbas       #+#    #+#                 */
/*   Updated: 2021/11/08 13:53:16 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	write_c(va_list args)
{
	int	c;

	c = va_arg(args, int);
	return (write(1, &c, 1));
}

int	write_s(va_list args)
{
	char	*str;
	int		size;

	str = va_arg(args, char *);
	if (!str)
		return (write(1, "(null)", 6));
	size = ft_strlen(str);
	return (write(1, str, size));
}
