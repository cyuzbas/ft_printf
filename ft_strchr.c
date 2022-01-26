/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/13 13:11:07 by cyuzbas       #+#    #+#                 */
/*   Updated: 2021/11/05 10:46:18 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_strchr(const char *s, int c)
{
	while (*s && *s != (char)c)
	{
		s++;
	}
	if (*s == (char)c)
		return (1);
	return (0);
}
