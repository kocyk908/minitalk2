/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 11:59:40 by prossi            #+#    #+#             */
/*   Updated: 2021/09/13 17:10:34 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	while (s[i])
		i++;
	str = (char *)ft_calloc((i + 1), sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// char	ft_upper(unsigned int index, char c)
// {
// 	if (c >= 'a' && c <= 'z')
// 		return (c - 32);
// 	else
// 		return (c);
// }

// int main()
// {
// 	char str[] = "Hello, world!";
// 	char *result = ft_strmapi(str, &ft_upper);
// 	printf("Original string: %s\n", str);
// 	printf("Mapped string: %s\n", result);
// 	free(result);
// 	return (0);
// }
