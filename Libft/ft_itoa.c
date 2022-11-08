/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngjokaj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 09:55:59 by ngjokaj           #+#    #+#             */
/*   Updated: 2022/10/05 09:55:59 by ngjokaj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* the itoa() function convert a Integer to ACII string (char).
first i declarer that i = n < 0, if its true it will become
1 and if it is false it will become false.
*/
char	*ft_itoa(int n)
{
	int			i;
	int			len;
	long long	n2;
	char		*s;

	i = n < 0;
	n2 = n;
	if (i > 0)
		n2 = -n2;
	len = 1;
	while (n / 10 != 0 && len++)
		n /= 10;
	s = malloc(sizeof(char) * (len + i + 1));
	if (!s)
		return (0);
	s[len + i] = '\0';
	while (len-- != 0)
	{
		s[len + i] = n2 % 10 + '0';
		n2 /= 10;
	}
	if (i > 0)
		s[0] = '-';
	return (s);
}
