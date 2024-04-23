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

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <string.h>
#include "ft_printf.h"
#include "libft.h"

void	send_char(pid_t pid, char c)
{
	int	i;
	int	signal;

	i = 7;
	while (i >= 0)
	{
		if ((c >> i) & 1)
		{
			signal = SIGUSR2;
		}
		else
		{
			signal = SIGUSR1;
		}
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
	pid_t	pid;
	char	*message;
	size_t	i;

	if (argc != 3)
	{
		ft_printf("Usage: %s <Server PID> <Message>\n", argv[0]);
		return (0);
	}
	pid = ft_atoi(argv[1]);
	message = argv[2];
	i = 0;
	while (i < ft_strlen(message))
	{
		send_char(pid, message[i]);
		i++;
	}
	return (0);
}
