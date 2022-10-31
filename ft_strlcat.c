/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngjokaj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 09:56:01 by ngjokaj           #+#    #+#             */
/*   Updated: 2022/10/20 21:09:00 by ngjokaj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*concatenate strings (sc into dst).
*/
size_t	ft_strlcat(char *dst, const char *sc, size_t n)
{
	size_t	i;
	size_t	alen;
	size_t	blen;

	i = 0;
	alen = ft_strlen(sc);
	blen = ft_strlen(dst);
	if (n < blen || n == 0)
		return (alen + n);
	if (!dst)
		return (alen);
	while (sc[i] && (blen + i) < n - 1)
	{
		dst[blen + i] = sc[i];
		i++;
	}
	dst[blen + i] = 0;
	return (alen + blen);
}
