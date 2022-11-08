/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngjokaj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 09:56:00 by ngjokaj           #+#    #+#             */
/*   Updated: 2022/10/17 13:33:22 by ngjokaj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* the memcpy() function copies n numbers of bytes from byte string to another
and returns new byte string  */

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int		i;
	unsigned const char	*src_c;
	unsigned char		*dst_c;

	if (src == NULL && dst == NULL)
		return (NULL);
	src_c = src;
	dst_c = dst;
	i = 0;
	while (i < n)
	{
		dst_c[i] = src_c[i];
		i++;
	}
	return (dst);
}

/*
#include <stdio.h>
#include <string.h>

int main()
{
	char str1[] = "Replace this text";
	char str2[] = "Done";
	char str3[] = "Another one";
	char str4[] = "Done";

	printf("String before change: %s\n", str1);

	ft_memcpy(str1, str2, sizeof(str2));

	printf("String after ft_memcpy: %s\n", str1);

	printf("\nTesting original memcpy function:\n");

	printf("String before change: %s\n", str3);

	memcpy(str3, str4, sizeof(str4));

	printf("String after memcpy: %s\n", str3);

	return 0;
}*/ 