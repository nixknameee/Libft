/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngjokaj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 09:56:01 by ngjokaj           #+#    #+#             */
/*   Updated: 2022/10/05 09:56:01 by ngjokaj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

/* The Strlen() function counts the length of the
string.(!It dosent count NULL Character)*/

size_t	ft_strlen(const char *s)
{
	size_t	count;

	count = 0;
	while (s[count] != 0)
		count++;
	return (count);
}

/*
int main()
{
	const char test1[] = "Glieder sind versrschieden lang.";
	int n = ft_strlen(test1);
	int check = strlen(test1);

	printf("%s\n", test1);
	printf("Orignal strlen()zählt %d characters. \n", check);

	printf("mein ft_strlen() zählt %d characters.\n", n);


		return (0);
}*/ 