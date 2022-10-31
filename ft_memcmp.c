/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngjokaj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 09:56:00 by ngjokaj           #+#    #+#             */
/*   Updated: 2022/10/05 09:56:00 by ngjokaj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*compare byte string. /vergleicht byte string*/

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;
	size_t			a;

	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	a = 0;
	while (a < n)
	{
		if (s1[a] < s2[a])
			return (-1);
		else if (s1[a] > s2[a])
			return (1);
		a++;
	}
	return (0);
}
