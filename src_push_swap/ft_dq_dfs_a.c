/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dq_dfs_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 05:00:20 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/19 17:04:50 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	_run_op(t_dq *dq, t_deque *op)
{
	t_dq	*tmp_dq;
	t_deque	*tmp_op;
	int		ope;
	int		ret;

	tmp_dq = ft_dq_init(dq->a->size);
	ft_deque_copy(tmp_dq->a, dq->a);
	ft_deque_copy(tmp_dq->b, dq->b);
	tmp_op = ft_deque_init(OPSIZE);
	ft_deque_copy(tmp_op, op);
	while (!ft_deque_is_empty(tmp_op))
	{
		ope = ft_deque_get_front(tmp_op);
		ft_deque_pop_front(tmp_op);
		ft_op_run_dq(tmp_dq, ope);
	}
	ret = ft_deque_is_sorted(tmp_dq->a, tmp_dq->cmp_a);
	if (ft_deque_get_size(tmp_dq->a, tmp_dq->a->front, tmp_dq->a->back)
		!= tmp_dq->a->size)
		ret = 0;
	ft_deque_free(tmp_op);
	ft_dq_free(tmp_dq);
	return (ret);
}

static void	_do_dfs(t_dq *dq, int n, t_deque *op[], int ope)
{
	ft_deque_push_back(op[0], ope);
	ft_dq_dfs_a(dq, n, op);
	ft_deque_pop_back(op[0]);
}

void	ft_dq_dfs_a(t_dq *dq, int n, t_deque *op[])
{
	int	mini;
	int	size;

	size = ft_deque_get_size(op[0], op[0]->front, op[0]->back);
	mini = ft_deque_get_size(op[1], op[1]->front, op[1]->back);
	if (size >= dq->a->size * 2 - 1)
		return ;
	if (ft_deque_is_sorted(dq->a, dq->cmp_a))
		if (ft_deque_get_size(dq->a, dq->a->front, dq->a->back) == dq->a->size)
			return ;
	if (_run_op(dq, op[0]) == 1)
	{
		if (mini > ft_deque_get_size(op[0], op[0]->front, op[0]->back))
			ft_deque_copy(op[1], op[0]);
		return ;
	}
	if (!ft_deque_is_empty(dq->a))
	{
		_do_dfs(dq, n, op, PB);
		if (ft_deque_get_size(dq->a, dq->a->front, dq->a->back) > 1)
		{
			if (ft_deque_get_back(op[0]) != SA)
				_do_dfs(dq, n, op, SA);
			_do_dfs(dq, n, op, RA);
			_do_dfs(dq, n, op, RRA);
		}
	}
	_do_dfs(dq, n, op, PA);
	if (ft_deque_get_size(dq->b, dq->b->front, dq->b->back) > 1)
	{
		if (ft_deque_get_back(op[0]) != SB)
			_do_dfs(dq, n, op, SB);
		_do_dfs(dq, n, op, RB);
		_do_dfs(dq, n, op, RRB);
	}
	if (ft_deque_get_size(dq->a, dq->a->front, dq->a->back) > 1
		&& ft_deque_get_size(dq->b, dq->b->front, dq->b->back) > 1)
	{
		if (ft_deque_get_back(op[0]) != SB)
			_do_dfs(dq, n, op, SS);
		_do_dfs(dq, n, op, RR);
		_do_dfs(dq, n, op, RRR);
	}
}