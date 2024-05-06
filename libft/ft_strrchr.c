/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 14:38:35 by prossi            #+#    #+#             */
/*   Updated: 2021/09/15 12:08:12 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
// #include <string.h>

// int main(void)
// {
//     const char *str1 = "Hello, World!";
//     int char_to_find1 = 'o';
//     printf("\n");
//     printf("Test case 1:\n");
//     printf("String: \"%s\"\n", str1);
//     printf("Character to find: '%c'\n", char_to_find1);
//     printf("Result of ft_strrchr: %s\n", ft_strrchr(str1, char_to_find1));
//     printf("Result of strrchr: %s\n", strrchr(str1, char_to_find1));

//     const char *str2 = "Hello, World!";
//     int char_to_find2 = 'z';
//     printf("\nTest case 2:\n");
//     printf("String: \"%s\"\n", str2);
//     printf("Character to find: '%c'\n", char_to_find2);
//     printf("Result of ft_strrchr: %s\n", ft_strrchr(str2, char_to_find2));
//     printf("Result of strrchr: %s\n", strrchr(str2, char_to_find2));

//     const char *str3 = "Hello, World!";
//     int char_to_find3 = '\0';
//     printf("\nTest case 3:\n");
//     printf("String: \"%s\"\n", str3);
//     printf("Character to find: '\\0'\n");
//     printf("Result of ft_strrchr: %s\n", ft_strrchr(str3, char_to_find3));
//     printf("Result of strrchr: %s\n", strrchr(str3, char_to_find3));

//     return 0;
// }
