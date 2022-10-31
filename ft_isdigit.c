/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngjokaj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 09:55:59 by ngjokaj           #+#    #+#             */
/*   Updated: 2022/10/05 09:55:59 by ngjokaj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* the isdigit() function checks ift the parameter (int) is numeric, 
it returns "1" if the parameter has a ascii value, if not it return "0"**/

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
/*
#include <stddef.h>
int main()
{
	char	c;
	c = '9';
	printf("Result ist: %d\n", ft_isdigit(c));

	c = '+';
	printf("Return:%d\n", ft_isdigit(c));
	return (0);
}*/ 