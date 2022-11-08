/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngjokaj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 09:55:59 by ngjokaj           #+#    #+#             */
/*   Updated: 2022/10/20 21:11:07 by ngjokaj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*memory allocation / Zuweisung von Speicherplatz 
*/

void	*ft_calloc(size_t n, size_t size)
{
	void	*a;
	size_t	i;

	i = n * size;
	a = (void *) malloc(i);
	if (a == NULL)
		return (0);
	ft_bzero(a, i);
	return (a);
}
