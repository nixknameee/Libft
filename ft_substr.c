/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngjokaj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 09:56:01 by ngjokaj           #+#    #+#             */
/*   Updated: 2022/10/20 20:41:54 by ngjokaj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

//extract substring from string

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s2;

	if ((size_t)start > ft_strlen(s))
		return (ft_strdup(""));
	if ((size_t)len > ft_strlen(s))
		len = ft_strlen(s);
	if (!s)
		return (0);
	s = s + start;
	s2 = malloc(len + 1);
	if (s2 == 0)
		return (0);
	ft_memcpy(s2, s, len);
	s2 += len;
	*s2 = '\0';
	return (s2 - len);
}
