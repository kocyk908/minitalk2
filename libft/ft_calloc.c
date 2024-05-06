/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 14:34:48 by prossi            #+#    #+#             */
/*   Updated: 2021/09/15 14:39:09 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	if (nmemb == 0 || size == 0)
	{
		nmemb = 1;
		size = 1;
	}
	if (2147483647 / nmemb < size)
		return (NULL);
	p = malloc(nmemb * size);
	if (!p)
		return (NULL);
	while (i < size * nmemb)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
/*
int main(void)
{
    size_t nmemb = 10;
    size_t size = sizeof(int);
    
    int *arr = ft_calloc(nmemb, size);
    if (arr == NULL) {
        printf("Allocation failed\n");
        return 1;
    }
    
    printf("Allocated array:\n");
    for (size_t i = 0; i < nmemb; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    free(arr);
    return 0;
}*/
