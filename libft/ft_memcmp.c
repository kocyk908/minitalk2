/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 14:36:20 by prossi            #+#    #+#             */
/*   Updated: 2021/09/15 18:04:43 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*str1;
	char	*str2;
	size_t	i;

	i = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		i++;
	}
	return (0);
}
/*
#include <string.h>

int main (void)
{
   char str1[15];
   char str2[15];
   int retORG;
   int retMINE;

   memcpy(str1, "abcdef", 6);
   memcpy(str2, "ABCDEF", 6);

   retORG = memcmp(str1, str2, 5);
   retMINE = ft_memcmp(str1, str2, 5);

   if(retORG > 0) {
      printf("ORG str2 is less than str1");
   } else if(retORG < 0) {
      printf("ORG str1 is less than str2");
   } else {
      printf("ORG str1 is equal to str2");
   }
   printf("\n");
   if(retMINE > 0) {
      printf("MINE str2 is less than str1");
   } else if(retMINE < 0) {
      printf("MINE str1 is less than str2");
   } else {
      printf("MINE str1 is equal to str2");
   }
   
   return(0);
}*/
