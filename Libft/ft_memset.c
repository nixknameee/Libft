/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngjokaj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 09:56:00 by ngjokaj           #+#    #+#             */
/*   Updated: 2022/10/17 13:39:00 by ngjokaj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*the function memset() puts a a byte string in to a byte value;
it returns a pointer to the new set memory */

void	*ft_memset(void *s, int c, size_t len)
{
	unsigned char	*byte;

	byte = s;
	while (len-- > 0)
	{
		*byte++ = c;
	}
	return (s);
}

// #include <string.h>

// 	int main()
// {
// 	char str[50] = "I really love this.";
// 	printf("\nBefore change: %s\n", str);

// 	ft_memset(str + 9, 'x', 4*sizeof(char));

// 	printf("After change: %s\n", str);

// 	memset(str + 9, '.', 4*sizeof(char));
// 	printf("Checking with original memset function: %s\n", str);

// 	return 0;

// } 