/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 14:37:12 by prossi            #+#    #+#             */
/*   Updated: 2021/09/20 16:35:04 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = ft_strlen(s);
	str = (char *)malloc(sizeof(*str) * (j + 1));
	if (!str)
		return (NULL);
	while (i < j)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
// #include <string.h>

// int main()
// {
//     char srcOG[] = "Lukasz.Koc";
//     char srcMI[] = "Lukasz.Koc";
//     // A copy of source is created dynamically
//     // and pointer to copy is returned.
//     char* destOG = strdup(srcOG); 
//     char* destMI = ft_strdup(srcMI);

//     printf("%s", destOG);
// 	printf("\n");
//     printf("%s", destMI);
//     return 0;
// }