/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op_run_dq.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 19:06:05 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/18 04:03:39 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	void	_run_rrr(t_deque *a, t_deque *b, int op)
{
	int	tmp;

	if (op == RRA || op == RRR)
	{
		tmp = ft_deque_get_back(a);
		ft_deque_pop_back(a);
		ft_deque_push_front(a, tmp);
	}
	if (op == RRB || op == RRR)
	{
		tmp = ft_deque_get_back(b);
		ft_deque_pop_back(b);
		ft_deque_push_front(b, tmp);
	}
}

static	void	_run_rr(t_deque *a, t_deque *b, int op)
{
	int	tmp;

	if (op == RA || op == RR)
	{
		tmp = ft_deque_get_front(a);
		ft_deque_pop_front(a);
		ft_deque_push_back(a, tmp);
	}
	if (op == RB || op == RR)
	{
		tmp = ft_deque_get_front(b);
		ft_deque_pop_front(b);
		ft_deque_push_back(b, tmp);
	}
}

void	ft_op_run_dq(t_deque *a, t_deque *b, int op)
{
	int	tmp;

	if (op == SA || op == SS)
		ft_deque_swap_front(a);
	if (op == SB || op == SS)
		ft_deque_swap_front(b);
	if (op == PA)
	{
		tmp = ft_deque_get_front(b);
		ft_deque_pop_front(b);
		ft_deque_push_front(a, tmp);
	}
	if (op == PB)
	{
		tmp = ft_deque_get_front(a);
		ft_deque_pop_front(a);
		ft_deque_push_front(b, tmp);
	}
	_run_rr(a, b, op);
	_run_rrr(a, b, op);
}
