/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngjokaj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 09:55:59 by ngjokaj           #+#    #+#             */
/*   Updated: 2022/10/05 09:55:59 by ngjokaj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* isalnum()function checks if the parameter is alphanum(alphabet or number)
if its true it will return "1" otherwise it returns "0" */

int	ft_isalnum(int c)
{
	if (((c >= 65 && c <= 90) || (c >= 97 && c <= 122)) || (c >= 48 && c <= 57))
		return (1);
	else
		return (0);
}
/*
int main()
{
	char c;

	c = ':';
	printf("Result: %d\n", ft_isalnum(c));

	c = 'a';
	printf("Result: %d\n", ft_isalnum(c));

	return (0);
}*/ 