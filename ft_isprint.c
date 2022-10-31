/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngjokaj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 09:55:59 by ngjokaj           #+#    #+#             */
/*   Updated: 2022/10/05 09:55:59 by ngjokaj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*the isprint() function checks if the parameter is printable with ascii value
if it is it will return "1" otherwise it returns "0" */

int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	else
		return (0);
}

// int main()
// {
// 	char	c;

//printf("If Parameter returns 1 ist okay if 
//it is not printable it returns 0\n");

// 	c = '+';
// 	printf("This Paramter is: %d\n", ft_isprint(c));

// 	c = '1';
// 	printf("This parameter is: %d\n", ft_isprint(c));

// 	return (0);
// } 