/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op_run_dq.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 19:06:05 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/19 04:31:22 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	void	_run_rrr(t_dq *dq, int op)
{
	int	tmp;

	if (op == RRA || op == RRR)
	{
		tmp = ft_deque_get_back(dq->a);
		ft_deque_pop_back(dq->a);
		ft_deque_push_front(dq->a, tmp);
	}
	if (op == RRB || op == RRR)
	{
		tmp = ft_deque_get_back(dq->b);
		ft_deque_pop_back(dq->b);
		ft_deque_push_front(dq->b, tmp);
	}
}

static	void	_run_rr(t_dq *dq, int op)
{
	int	tmp;

	if (op == RA || op == RR)
	{
		tmp = ft_deque_get_front(dq->a);
		ft_deque_pop_front(dq->a);
		ft_deque_push_back(dq->a, tmp);
	}
	if (op == RB || op == RR)
	{
		tmp = ft_deque_get_front(dq->b);
		ft_deque_pop_front(dq->b);
		ft_deque_push_back(dq->b, tmp);
	}
}

void	ft_op_run_dq(t_dq *dq, int op)
{
	int	tmp;

	if (op == SA || op == SS)
		ft_deque_swap_front(dq->a);
	if (op == SB || op == SS)
		ft_deque_swap_front(dq->b);
	if (op == PA)
	{
		tmp = ft_deque_get_front(dq->b);
		ft_deque_pop_front(dq->b);
		ft_deque_push_front(dq->a, tmp);
	}
	if (op == PB)
	{
		tmp = ft_deque_get_front(dq->a);
		ft_deque_pop_front(dq->a);
		ft_deque_push_front(dq->b, tmp);
	}
	_run_rr(dq, op);
	_run_rrr(dq, op);
}
