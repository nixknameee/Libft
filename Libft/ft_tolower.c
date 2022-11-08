/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngjokaj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 09:56:01 by ngjokaj           #+#    #+#             */
/*   Updated: 2022/10/05 09:56:01 by ngjokaj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*the tolower() function  converts uppercase(ABC) in to lowercase (abc)*/

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
