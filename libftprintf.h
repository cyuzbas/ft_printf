/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libftprintf.h                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/05 15:12:22 by cyuzbas       #+#    #+#                 */
/*   Updated: 2021/11/08 15:12:50 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

int		write_format(int c, va_list args);
int		ft_printf(const char *format, ...);
int		execute_printf(const char *format, va_list args, int size);
int		ft_strchr(const char *s, int c);
char	*ft_itoa(int n);
char	*ft_utoa(unsigned int n);
char	*ft_strdup(const char *src);
size_t	ft_strlen(const char *str);
int		write_c(va_list args);
int		write_s(va_list args);
int		write_id(va_list args);
int		write_u(va_list args);
int		write_xupper(va_list args);
int		write_x(va_list args);
int		write_p(va_list args);
char	*ft_converthexa(unsigned long n);
char	*hexa_lowercase(char *hexadecimal);

#endif