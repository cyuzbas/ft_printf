/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/03 14:16:23 by cyuzbas       #+#    #+#                 */
/*   Updated: 2021/11/08 15:23:09 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	is_format(int c)
{
	return (ft_strchr("cspdiuxX%", c));
}

int	write_format(int c, va_list args)
{
	int	size;

	size = 0;
	if (c == 'c')
		size += write_c(args);
	else if (c == 's')
		size += write_s(args);
	else if (c == 'p')
		size += write_p(args);
	else if (c == 'u')
		size += write_u(args);
	else if (c == 'i' || c == 'd')
		size += write_id(args);
	else if (c == 'X')
		size += write_xupper(args);
	else if (c == 'x')
		size += write_x(args);
	else if (c == '%')
		size += write(1, "%", 1);
	if (size == -1)
		return (-1);
	return (size);
}

int	execute_printf(const char	*format, va_list args, int size)
{
	int	errorcheck;
	int	i;

	i = 0;
	while (format[i])
	{
		if (format[i] != '%')
			size += write(1, &format[i], 1);
		else
		{	
			i++;
			if (is_format(format[i]))
			{
				errorcheck = write_format(format[i], args);
				if (errorcheck == -1)
					return (-1);
				size += errorcheck;
			}
			else
				return (-1);
		}
		i++;
	}
	return (size);
}

int	ft_printf(const char *format, ...)
{
	int		size;
	va_list	args;

	size = 0;
	va_start (args, format);
	size = execute_printf(format, args, size);
	if (size == -1)
		return (-1);
	va_end (args);
	return (size);
}
