/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 14:38:26 by prossi            #+#    #+#             */
/*   Updated: 2021/09/22 19:24:35 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		while (little[j] == big[i + j] && little[j] && (i + j) < len)
			j++;
		if (little[j] == '\0')
			return ((char *)big + i);
		i++;
		j = 0;
	}
	return (0);
}
/*
#include <string.h>

void test_strnstr(const char *big, const char *little, size_t len) {
    char *result_ft = ft_strnstr(big, little, len);

    printf("Test ft_strnstr(\"%s\", \"%s\", %zu):\n", big, little, len);
    printf("Result ft_strnstr: %s\n", result_ft ? result_ft : "NULL");
    printf("\n");
}

int main(void) {

    test_strnstr("Hello, World!", "World", 13);
    test_strnstr("Hello, World!", "World", 5);
    test_strnstr("Hello, World!", "World", -1);
    test_strnstr("Hello, World!", "Hello", 13);
    test_strnstr("Hello, World!", "Hello", 5);
    test_strnstr("Hello, World!", "Hello", 20);
    test_strnstr("Hello, World!", "", 13);

    return 0;
}*/
