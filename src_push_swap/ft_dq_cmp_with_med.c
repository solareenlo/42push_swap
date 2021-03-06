/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dq_cmp_with_med.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 03:57:48 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/26 05:27:50 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	_run_pb_ra(t_dq *dq, int size, int *med)
{
	int	res;
	int	i;
	int	front;

	i = 0;
	res = 0;
	while (i < size)
	{
		front = ft_deque_get_front(dq->a);
		if (dq->cmp_a(&front, med) <= 0)
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

int	ft_dq_cmp_with_med_from_a_to_b_first(t_dq *dq, int size)
{
	int	res;
	int	med;

	med = ft_deque_get_median(dq->a, size, dq->cmp_a);
	res = _run_pb_ra(dq, size, &med);
	return (size - res);
}

int	ft_dq_cmp_with_med_from_a_to_b(t_dq *dq, int size)
{
	int	res;
	int	med;
	int	i;

	med = ft_deque_get_median(dq->a, size, dq->cmp_a);
	res = _run_pb_ra(dq, size, &med);
	i = 0;
	while (i < size - res)
	{
		ft_op_run_dq(dq, RRA);
		ft_op_put(RRA);
		i++;
	}
	return (size - res);
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
			ft_op_run_dq_pa_ra(dq);
		else if (dq->cmp_b(&front[0], &med) <= 0)
		{
			ft_op_run_dq_pa(dq);
			res++;
		}
		else
			ft_op_run_dq_rb(dq);
		i++;
	}
	return (res);
}
