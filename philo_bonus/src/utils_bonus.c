/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galetha <galetha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 14:04:57 by galetha           #+#    #+#             */
/*   Updated: 2021/12/27 12:28:17 by galetha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/philo_bonus.h"

int	check_count_eat(t_qw *f)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (i < f->num_phil)
	{
		if (f->ptr[i].count_eat == 0)
			count++;
		i++;
	}
	if (count == f->num_phil)
		return (1);
	return (0);
}

void	kill_process(t_qw *g)
{
	int	i;

	i = 0;
	while (i < g->num_phil)
	{
		kill(g->ptr[i].pid, SIGKILL);
		i++;
	}
}

void	p_error(char c)
{
	if (c == '1')
		printf("Incorrect args\n");
	else if (c == '2')
		printf("Dont allocate memmory");
	exit (-1);
}
