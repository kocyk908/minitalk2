/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkoc <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 14:34:13 by lkoc              #+#    #+#             */
/*   Updated: 2024/04/22 14:34:16 by lkoc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include "ft_printf.h"
#include "libft.h"

void	handle_signal(int signum)
{
	static char	bits;
	static int	count;
	int			mask;

	mask = 0;
	if (count == 0)
		bits = 0;
	if (signum == SIGUSR1 || signum == SIGUSR2)
	{
		if (signum == SIGUSR2)
		{
			mask = 1 << (7 - count);
			if ((bits & mask) == 0)
				bits += mask;
		}
		count++;
		if (count == 8)
		{
			write(1, &bits, 1);
			count = 0;
		}
	}
}

int	main(void)
{
	struct sigaction	sigact;

	sigact.sa_handler = &handle_signal;
	sigact.sa_flags = SA_RESTART;
	sigaction(SIGUSR1, &sigact, NULL);
	sigaction(SIGUSR2, &sigact, NULL);
	ft_printf("Server PID: %d\n", getpid());
	while (1)
		usleep(1);
	return (0);
}
