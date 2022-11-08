/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngjokaj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 09:56:01 by ngjokaj           #+#    #+#             */
/*   Updated: 2022/10/17 13:42:33 by ngjokaj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*The strchr() function locate character inside a string */

char	*ft_strchr(const char *s, int c)
{
	while (c > 127)
		c = c - 128;
	while (*s)
	{
		if (c == *s)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (0);
}
