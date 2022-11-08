/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngjokaj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 09:56:01 by ngjokaj           #+#    #+#             */
/*   Updated: 2022/10/05 09:56:01 by ngjokaj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//concatenate two strings into a new string (with malloc).

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	len;
	char	*ret;

	i = 0;
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	ret = malloc(len * sizeof(char));
	if (!ret)
		return (NULL);
	while (i <= len && s1[i])
	{
		ret[i] = s1[i];
		i++;
	}
	while (i <= len && *s2)
	{
		ret[i] = *s2;
		i++;
		s2++;
	}
	ret[i] = 0;
	return (ret);
}
