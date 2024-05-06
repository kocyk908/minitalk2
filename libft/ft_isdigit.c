/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 14:35:45 by prossi            #+#    #+#             */
/*   Updated: 2021/09/15 14:40:05 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	while ('0' <= c && c <= '9')
		return (1);
	return (0);
}
/*
int	main(void)
{
	int	c;
	int	h;
	
	c = '4';
	h = '~';
	printf("%d\n", ft_isdigit(c));
	printf("%d", ft_isdigit(h));
}*/
