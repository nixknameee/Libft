/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngjokaj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 09:56:01 by ngjokaj           #+#    #+#             */
/*   Updated: 2022/10/20 21:01:08 by ngjokaj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "libft.h"

/*the strncmp() function compares two strings up to the specified character or 
a null byte was found in one  of the two strings.*/

int	ft_strncmp(char const *s1, char const *s2, size_t size)
{
	unsigned char	a1;
	unsigned char	a2;

	while (size-- > 0)
	{
		a1 = *(unsigned char *)s1++;
		a2 = *(unsigned char *)s2++;
		if (a1 != a2)
			return (a1 - a2);
		if (a1 == '\0')
			return (0);
	}
	return (0);
}
