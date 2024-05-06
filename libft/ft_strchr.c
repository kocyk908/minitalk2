/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 14:37:01 by prossi            #+#    #+#             */
/*   Updated: 2021/09/15 14:44:40 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i] && s[i] != (char)c)
	{
		i++;
	}
	if (s[i] == (char)c)
	{
		return ((char *)&s[i]);
	}
	return ((char *) NULL);
}

// #include <string.h>

// int main (void)
// {
//    const char str[] = "lukasz.koc";
//    const char str2[] = "lukasz.koc";
//    const char ch = '.';
//    char *retOG;
//    char *retMI;

//    retOG = strchr(str, ch);

//    printf("String after %c is - %s\n", ch, retOG);

//    retMI = ft_strchr(str2, ch);

//    printf("String after %c is - %s\n", ch, retMI);

//    return(0);
// }
