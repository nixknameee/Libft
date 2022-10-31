/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngjokaj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 09:55:59 by ngjokaj           #+#    #+#             */
/*   Updated: 2022/10/05 09:55:59 by ngjokaj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* the isalpha( ) function checks ift the parameter (int) is alphabetic, 
it returns "1" if the parameter has a ascii value, if not it return "0" **/

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

/*int main()
{
    char c;
    c = 'Q';
    printf("\nResult when uppercase alphabet is passed: %d", isalpha(c));

    c = 'q';
    printf("\nResult when lowercase alphabet is passed: %d", isalpha(c));

    c='+';
    printf("\nResult when non-alphabetic character is passed: %d", isalpha(c));

    return 0;
}
*/ 