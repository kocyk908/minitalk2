/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkoc <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 14:34:06 by lkoc              #+#    #+#             */
/*   Updated: 2024/04/22 14:34:09 by lkoc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include "ft_printf.h"
#include "libft.h"

void	send_char(int pid, char c)
{
	int	i;
	int	signal;

	i = 7;
	while (i >= 0)
	{
		if ((c >> i) & 1)
			signal = SIGUSR2;
		else
			signal = SIGUSR1;
		if (kill(pid, signal) == -1)
		{
			ft_printf("Error sending signal");
			exit(0);
		}
		usleep(100);
		i--;
	}
}

// Opóźnienie, aby zapobiec kolizji sygnałów

int	main(int argc, char **argv)
{
	int		pid;
	size_t	i;
	char	*str;

	if (argc != 3)
	{
		ft_printf("Wrong amount of inputs\n");
		return (0);
	}
	pid = ft_atoi(argv[1]);
	str = argv[2];
	i = 0;
	while (i < ft_strlen(str))
	{
		send_char(pid, str[i]);
		i++;
	}
	return (0);
}
