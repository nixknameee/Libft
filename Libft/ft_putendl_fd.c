/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngjokaj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 09:56:00 by ngjokaj           #+#    #+#             */
/*   Updated: 2022/10/20 21:12:13 by ngjokaj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

//output string to given file with newline.

void	ft_putendl_fd(char *s, int fd)
{
	char	a;

	a = '\n';
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
	write(fd, &a, 1);
}
