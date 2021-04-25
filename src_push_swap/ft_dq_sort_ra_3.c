/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dq_sort_ra_3.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 07:17:27 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/26 07:21:20 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	_dq_sort_ra_3_1(t_dq *dq)
{
	ft_op_run_dq_sa(dq);
	if (ft_deque_get_front(dq->sorted) == ft_deque_get_front(dq->a))
	{
		ft_op_run_dq_ra(dq);
		if (ft_deque_get_front(dq->sorted)
			== ft_deque_get_front(dq->a))
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
}

static void	_dq_sort_ra_3_0(t_dq *dq)
{
	ft_op_run_dq_pb(dq);
	if (ft_deque_get_front(dq->sorted) == ft_deque_get_front(dq->a))
	{
		ft_op_run_dq_ra(dq);
		if (ft_deque_get_front(dq->sorted) == ft_deque_get_front(dq->a))
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
		_dq_sort_ra_3_1(dq);
}

void	ft_dq_sort_ra_3(t_dq *dq, t_deque *n)
{
	if (ft_deque_get_front(dq->sorted) == ft_deque_get_front(dq->a))
	{
		ft_op_run_dq_ra(dq);
		if (ft_deque_get_front(dq->sorted) == ft_deque_get_front(dq->a))
		{
			ft_op_run_dq_ra(dq);
			ft_op_run_dq_ra(dq);
		}
		else
		{
			ft_op_run_dq_sa(dq);
			ft_op_run_dq_ra(dq);
			ft_op_run_dq_ra(dq);
		}
	}
	else
		_dq_sort_ra_3_0(dq);
	ft_deque_pop_front(n);
}
