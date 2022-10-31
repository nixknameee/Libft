/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngjokaj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 09:55:59 by ngjokaj           #+#    #+#             */
/*   Updated: 2022/10/05 09:55:59 by ngjokaj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*the bzero() function writes zeros '0' to each byte in a byte string
*/

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*
int main()
{
	char	string[100] = "Wilkommen Zuhause.";
	printf("\nMein Freund,%s\n", string);

	ft_bzero(string + 10, 4*sizeof(char));
	printf("Nach der Veränderung %s\n", string);

	return (0);

}*/ 