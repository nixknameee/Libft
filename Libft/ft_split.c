/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngjokaj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 09:56:00 by ngjokaj           #+#    #+#             */
/*   Updated: 2022/10/20 20:42:16 by ngjokaj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*strndup()  function dublicates a string with the max 
on declarate bytes I put in the function.*/
static char	*ft_strndup(char const *s, char c)
{
	size_t	i;
	char	*res;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	res = malloc(sizeof(char) * (i + 1));
	if (!(res))
	{
		free(res);
		return (NULL);
	}
	ft_strlcpy(res, s, i + 1);
	return (res);
}
//Count the total number of words in a string

static size_t	ft_count(char const *s, char c)
{
	size_t	count;
	size_t	i;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

//split string, with specified character as delimiter, into an array of strings.

char	**ft_split(char const *s, char c)
{
	size_t	i;
	char	**res;
	size_t	str_len;

	str_len = ft_count(s, c);
	res = ft_calloc(sizeof(char *), (str_len + 1));
	if (!(res))
		return (0);
	i = -1;
	while (++i < str_len)
	{
		while (s[0] == c)
			s++;
		res[i] = ft_strndup(s, c);
		if (!(res[i]))
		{
			free(res);
			return (0);
		}
		s += ft_strlen(res[i]);
	}
	res[i] = 0;
	return (res);
}
