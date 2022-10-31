/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngjokaj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 09:55:59 by ngjokaj           #+#    #+#             */
/*   Updated: 2022/10/20 20:43:48 by ngjokaj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*- convert a string to an integer*/

int	ft_atoi(const char *string)
{
	int	a;
	int	n;
	int	i;

	i = 0;
	a = 0;
	n = 0;
	while (string[i] && (string[i] == ' ' || string[i] == '\t'
			|| string[i] == '\n' || string[i] == '\r' || string[i] == '\v'
			|| string[i] == '\f'))
		i++;
	if (*string && string[i] == '-')
	{
		n = 1;
		i++;
	}
	else if (string[i] == '+')
		i++;
	while (string[i] != '\0' && ft_isdigit(string[i]))
		a = (a * 10) + (string[i++] - '0');
	if (n == 1)
		a = -a;
	return (a);
}

// #include <stdio.h>
// #include <stdlib.h>

// int ft_atoi(const char *nptr);

// int main()
// {
// 	char num[] ="1212313";

// 	printf("convert String:\n'%s'\n\n", num);

// 	int result = ft_atoi(num);
// 	printf("Integer Result: %d\n\n", result);

// 	printf("to original atoi():\n\n");
// 	int test = atoi(num);
// 	printf("integer Result: %d\n", test);

// 	return 0;
// }
