/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngjokaj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 09:56:01 by ngjokaj           #+#    #+#             */
/*   Updated: 2022/10/20 21:10:09 by ngjokaj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// locate a substring in a string (size-bounded).

char	*ft_strnstr(const char *string, const char *find, size_t len)
{
	size_t	a;
	size_t	b;

	if (find[0] == '\0')
		return ((char *)string);
	a = 0;
	if (*string == '\0' || len <= 0)
		return (0);
	while (a < len)
	{
		b = 0;
		while (find[b] == string[a + b])
		{
			if (find[b + 1] == '\0')
				return ((char *)&string[a]);
			b++;
			if (a + b >= len)
				return (0);
		}
		a++;
	}
	return (0);
}
