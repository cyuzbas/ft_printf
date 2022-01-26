/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/03 14:16:30 by cyuzbas       #+#    #+#                 */
/*   Updated: 2021/11/05 10:46:18 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_strdup(const char *src)
{
	char			*str;
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = ft_strlen(src);
	str = (char *)malloc(sizeof(*str) * (len + 1));
	if (str == NULL)
		return (0);
	while (i < len)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
