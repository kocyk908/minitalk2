/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 11:59:49 by prossi            #+#    #+#             */
/*   Updated: 2021/09/15 11:58:26 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*new_str(const char *s1, size_t start, size_t len)
{
	char	*str;
	size_t	i;

	if (len <= 0 || start >= ft_strlen(s1))
		return (ft_strdup(""));
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s1[start + i];
		i++;
	}
	return (str);
}

static int	to_trim(const char *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(s1);
	if (!s1 || !set)
		return (NULL);
	while (s1[i] && to_trim(set, s1[i]))
		i++;
	while (j > 0 && to_trim(set, s1[j - 1]))
		j--;
	if (i >= j)
		return (ft_strdup(""));
	return (new_str(s1, i, j - i));
}

// int main(void)
// {
//     const char *s1 = "Hello, World!HHHHHHHH";
//     const char *set = "H";
//     char *trimmed_str;

//     trimmed_str = ft_strtrim(s1, set);
//     printf("String before: \"%s\"\n", s1);
//     printf("String after: \"%s\"\n", trimmed_str);
//     // Zwolnienie zaalokowanej pamięci
//     free(trimmed_str);

//     return 0;
// }
