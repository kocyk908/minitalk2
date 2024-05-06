/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 11:59:10 by prossi            #+#    #+#             */
/*   Updated: 2021/09/20 19:17:53 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_free(char **str, int size)
{
	while (0 < size)
	{
		free(*str);
		size--;
	}
	free(*str);
	return (NULL);
}

static int	count_words(const char *str, char c)
{
	int	count;
	int	trigger;

	count = 0;
	trigger = 0;
	while (*str)
	{
		if (*str != c && trigger == 0)
		{
			trigger = 1;
			count++;
		}
		else if (*str == c)
			trigger = 0;
		str++;
	}
	return (count);
}

static char	*word_copy(const char *str, int start, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((end - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (start < end)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

static void	ft_initiate_vars(size_t *i, int *j, int *index)
{
	*i = 0;
	*j = 0;
	*index = -1;
}

char	**ft_split(char const *s, char c)
{
	int		j;
	int		index;
	char	**word;
	size_t	i;

	ft_initiate_vars(&i, &j, &index);
	word = (char **)ft_calloc((count_words(s, c) + 1), sizeof(char *));
	if (!word)
		return (NULL);
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			word[j] = word_copy(s, index, i);
			if (word[j] == NULL)
				return (ft_free(word, j));
			index = -1;
			j++;
		}
		i++;
	}
	word[j] = 0;
	return (word);
}
/*
int	main(void)
{
	const char	*str = "My name is Slim Shady krra";
	char		**result = ft_split(str, ' ');
	int			i = 0;

	if (!result)
	{
		printf("Memory allocation failed\n");
		return (1);
	}

	printf("Split strings:\n");
	while (result[i] != NULL)
	{
		printf("%s\n", result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
}*/