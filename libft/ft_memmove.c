/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 14:36:40 by prossi            #+#    #+#             */
/*   Updated: 2021/09/20 12:32:55 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	len;

	if (src < dest)
	{
		len = n;
		while (len > 0)
		{
			len--;
			((unsigned char *)dest)[len] = ((unsigned char *)src)[len];
		}
	}
	else
	{
		len = 0;
		while (len < n)
		{
			((unsigned char *)dest)[len] = ((unsigned char *)src)[len];
			len++;
		}
	}
	return (dest);
}

// #include <string.h>

// int main () {
//    char destOG[] = "oldstring";
//    char destMINE[] = "oldstring";
//    const char src[]  = "newstring";

//    printf("Before memmove dest = %s, src = %s\n", destOG, src);
//    memmove(destOG, src, 9);
//    printf("After memmove dest = %s, src = %s\n", destOG, src);
//    printf("\n");
//    printf("Before memmove dest = %s, src = %s\n", destMINE, src);
//    ft_memmove(destMINE, src, 9);
//    printf("After memmove dest = %s, src = %s\n", destMINE, src);
//    return(0);
// }