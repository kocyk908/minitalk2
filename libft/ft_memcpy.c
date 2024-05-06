/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 14:36:29 by prossi            #+#    #+#             */
/*   Updated: 2021/09/15 14:41:28 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	i = 0;
	d = (char *)dest;
	s = (char *)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

// #include <string.h>
//
// int main (void)
// {
//    const char src[50] = "bomboclat";
//    char destORG[50] = "Heloooo!!";
//    char destMINE[50] = "Heloooo!!";
//    printf("Before memcpy dest = %s\n", destORG);
//    memcpy(destORG, src, strlen(src)+1);
//    printf("After memcpy dest = %s\n", destORG);
//
//    printf("Before memcpy dest = %s\n", destMINE);
//    memcpy(destMINE, src, strlen(src)+1);
//    printf("After memcpy dest = %s\n", destMINE);
//   
//    return(0);
// }
