/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngjokaj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 09:56:00 by ngjokaj           #+#    #+#             */
/*   Updated: 2022/10/20 20:41:21 by ngjokaj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*The  memmove()  function  copies n bytes from memory area src to memory
	   area dest.  The memory areas may overlap: copying takes place as though
	   the  bytes in src are first copied into a temporary array that does not
	   overlap src or dest, and the bytes are then copied from  the  temporary
	   array to dest.
*/
void	*ft_memmove(void *dst, const void *src, size_t size)
{
	size_t	i;
	char	*a;
	char	*s;

	if (dst == NULL && src == NULL)
		return (NULL);
	a = (char *)dst;
	s = (char *)src;
	i = 0;
	if (dst > src)
	{
		while (size-- > 0)
			a[size] = s[size];
	}
	else
	{
		while (i < size)
		{
			a[i] = s[i];
			i++;
		}
	}
	return (dst);
}

/*
#include <string.h>

int main()
{
	char str[] = "0123456789abcdefghijk.";

	char *d = str + 10;
	char *s = str + 8;

	printf("Before custom memmove: %s\n", str);

	ft_memmove(d, s, 5);

	printf("After custom memmove: %s\n", str);

	printf("\nChecking original memmove:\n\n");

	char str1[] = "665164165156jhhgn5156hg.";

	char *d1 = str1 + 10;
	char *s1 = str1 + 8;

	printf("Before original memmove: %s\n", str1);

	memmove(d1, s1, 5);

	printf("After original memmove: %s\n", str1);

	return 0;
}*/ 