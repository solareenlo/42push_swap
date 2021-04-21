/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dq_cmp_with_med.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 03:57:48 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/21 20:22:20 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_dq_cmp_with_med_from_a_to_b(t_dq *dq, int size)
{
	int	res;
	int	med;
	int	i;
	int	x;

	med = ft_deque_get_median(dq->a, size, dq->cmp_a);
	i = 0;
	res = 0;
	while (i < size)
	{
		x = ft_deque_get_front(dq->a);
		if (dq->cmp_a(&x, &med) <= 0)
		{
			ft_op_run_dq(dq, PB);
			ft_op_put(PB);
			res++;
		}
		else
		{
			ft_op_run_dq(dq, RA);
			ft_op_put(RA);
		}
		i++;
	}
	return (res);
}

int	ft_dq_cmp_with_med_from_b_to_a(t_dq *dq, int size)
{
	int	res;
	int	med;
	int	i;
	int	front[2];

	med = ft_deque_get_median(dq->b, size, dq->cmp_b);
	i = 0;
	res = 0;
	while (i < size)
	{
		front[0] = ft_deque_get_front(dq->b);
		front[1] = ft_deque_get_front(dq->sorted);
		if (front[0] == front[1])
		{
			ft_op_run_dq(dq, PA);
			ft_op_put(PA);
			ft_op_run_dq(dq, RA);
			ft_op_put(RA);
			ft_deque_pop_front(dq->sorted);
		}
		else if (dq->cmp_b(&front[0], &med) <= 0)
		{
			ft_op_run_dq(dq, PA);
			ft_op_put(PA);
			res++;
		}
		else
		{
			ft_op_run_dq(dq, RB);
			ft_op_put(RB);
		}
		i++;
	}
	return (res);
}
