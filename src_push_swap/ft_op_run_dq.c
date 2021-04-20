/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op_run_dq.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 19:06:05 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/20 15:41:48 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	void	_run_rrr(t_dq *dq, int op)
{
	int	tmp;

	if ((op == RRA || op == RRR) && !ft_deque_is_empty(dq->a))
	{
		tmp = ft_deque_get_back(dq->a);
		ft_deque_pop_back(dq->a);
		ft_deque_push_front(dq->a, tmp);
	}
	else if ((op == RRB || op == RRR) && !ft_deque_is_empty(dq->b))
	{
		tmp = ft_deque_get_back(dq->b);
		ft_deque_pop_back(dq->b);
		ft_deque_push_front(dq->b, tmp);
	}
}

static	void	_run_rr(t_dq *dq, int op)
{
	int	tmp;

	if ((op == RA || op == RR) && !ft_deque_is_empty(dq->a))
	{
		tmp = ft_deque_get_front(dq->a);
		ft_deque_pop_front(dq->a);
		ft_deque_push_back(dq->a, tmp);
	}
	else if ((op == RB || op == RR) && !ft_deque_is_empty(dq->b))
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
	else if (op == SB || op == SS)
		ft_deque_swap_front(dq->b);
	else if ((op == PA) && !ft_deque_is_empty(dq->b))
	{
		tmp = ft_deque_get_front(dq->b);
		ft_deque_pop_front(dq->b);
		ft_deque_push_front(dq->a, tmp);
	}
	else if ((op == PB) && !ft_deque_is_empty(dq->a))
	{
		tmp = ft_deque_get_front(dq->a);
		ft_deque_pop_front(dq->a);
		ft_deque_push_front(dq->b, tmp);
	}
	_run_rr(dq, op);
	_run_rrr(dq, op);
}
