/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 11:59:30 by prossi            #+#    #+#             */
/*   Updated: 2021/09/16 14:06:57 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		len;
	char	*str;

	len = ft_strlen(s1) + ft_strlen(s2);
	i = 0;
	j = 0;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}
int main(void)
{
    const char *s1 = NULL;
    const char *s2 = "World!";
    char *result = ft_strjoin(s1, s2);

    printf("Result: %s\n", result);

    free(result); // Zwolnienie zaalokowanej pamięci

    return 0;
}