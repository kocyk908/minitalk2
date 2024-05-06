/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 11:59:19 by prossi            #+#    #+#             */
/*   Updated: 2021/09/13 11:59:20 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, s + i);
		i++;
	}
}
// void	print_char(unsigned int index, char *c)
// {
// 	printf("Character at index %u is: %c\n", index, *c);
// }
// int main()
// {
//     char str[] = "Hello, world!"; // Przykładowy łańcuch znaków
//     // Wywołanie ft_striteri przekazując łańcuch znaków i funkcję print_char
//     ft_striteri(str, &print_char);
//     return 0;
// }
