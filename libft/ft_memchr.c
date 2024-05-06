/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 14:36:09 by prossi            #+#    #+#             */
/*   Updated: 2021/09/15 14:40:49 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		if ((unsigned char)str[i] == (unsigned char)c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}
/*
#include <string.h>

int main (void)
{
   const char str[] = "https://www.tutorialspoint.com";
   const char str1[] = "https://www.tutorialspoint.com";
   const char ch = '.';
   char *retORG;
   char *retMINE;

   retORG = memchr(str, ch, strlen(str));
   retMINE = ft_memchr(str1, ch, strlen(str));

   printf("StringORG after |%c| is - |%s|\n", ch, retORG);
   printf("\n");
   printf("StringMINE after |%c| is - |%s|\n", ch, retMINE);

   return(0);
}*/
