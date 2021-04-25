/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dq_sort_pa_ra_3.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 06:51:33 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/26 06:59:30 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	_dq_sort_pa_ra_3_1(t_dq *dq)
{
	ft_op_run_dq_pa(dq);
	if (ft_deque_get_front(dq->sorted) == ft_deque_get_front(dq->b))
	{
		ft_op_run_dq_pa_ra(dq);
		if (ft_deque_get_front(dq->a) < ft_deque_get_front(dq->b))
		{
			ft_op_run_dq_ra(dq);
			ft_op_run_dq_pa_ra(dq);
		}
		else
		{
			ft_op_run_dq_pa_ra(dq);
			ft_op_run_dq_ra(dq);
		}
	}
	else
	{
		ft_op_run_dq_sb(dq);
		ft_op_run_dq_pa_ra(dq);
		ft_op_run_dq_ra(dq);
		ft_op_run_dq_pa_ra(dq);
	}
}

static void	_dq_sort_pa_ra_3_0(t_dq *dq)
{
	if (ft_deque_get_front(dq->sorted) == ft_deque_get_front(dq->b))
	{
		ft_op_run_dq_pa_ra(dq);
		ft_op_run_dq_pa(dq);
		ft_op_run_dq_pa(dq);
		ft_op_run_dq_ra(dq);
		ft_op_run_dq_ra(dq);
	}
	else
		_dq_sort_pa_ra_3_1(dq);
}

void	ft_dq_sort_pa_ra_3(t_dq *dq)
{
	if (ft_deque_is_sorted(dq->b, dq->cmp_a))
	{
		ft_op_run_dq_pa_ra(dq);
		ft_op_run_dq_pa_ra(dq);
		ft_op_run_dq_pa_ra(dq);
	}
	else if (ft_deque_is_sorted(dq->b, dq->cmp_b))
	{
		ft_op_run_dq_pa(dq);
		ft_op_run_dq_pa(dq);
		ft_op_run_dq_pa(dq);
		ft_op_run_dq_ra(dq);
		ft_op_run_dq_ra(dq);
		ft_op_run_dq_ra(dq);
	}
	else
		_dq_sort_pa_ra_3_0(dq);
}
