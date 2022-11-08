/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngjokaj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 09:56:00 by ngjokaj           #+#    #+#             */
/*   Updated: 2022/10/20 21:28:09 by ngjokaj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*the memrchr() function scans the memory for a character (byte string)*/

void	*ft_memchr(void *str, int c, size_t n)
{
	char	c2;

	c2 = c;
	while (n != 0)
	{
		if (*(char *)str == c2)
		{
			return (str);
		}
		str++;
		n--;
	}
	return (NULL);
}
