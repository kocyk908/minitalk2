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

	i = 7;
	while (i >= 0)
	{
		if ((c >> i) & 1)
			kill(pid, SIGUSR2);
		else
			kill(pid, SIGUSR1);
		usleep(200);
		i--;
	}
}

int	main(int argc, char **argv)
{
	int		pid;
	char	*str;

	if (argc != 3)
	{
		ft_printf("Usage: %s <PID> <Message>\n", argv[0]);
	}
	else
	{
		pid = ft_atoi(argv[1]);
		str = argv[2];
		while (str && *str)
		{
			send_char(pid, *str++);
		}
		send_char(pid, '\n');
	}
	return (0);
}
