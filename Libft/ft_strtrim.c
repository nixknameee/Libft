/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngjokaj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 09:56:01 by ngjokaj           #+#    #+#             */
/*   Updated: 2022/10/20 21:20:00 by ngjokaj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//r trim beginning and end of string with the specified characters.

char	*ft_strtrim(char const *s1, char const *set)
{
	int	c;

	while (*s1 && ft_strchr(set, *s1))
		s1++;
	c = ft_strlen(s1);
	while (c && ft_strchr(set, s1[c]))
		c--;
	return (ft_substr(s1, 0, c + 1));
}
