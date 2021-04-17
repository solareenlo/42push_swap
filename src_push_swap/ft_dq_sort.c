/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dq_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 16:34:22 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/17 20:41:38 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	dfs(t_dq *dq, t_deque *op, t_deque *res);

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
		ft_run_op_dq(tmp_dq->a, tmp_dq->b, ope);
	}
	ret = ft_deque_is_sorted(tmp_dq->a, tmp_dq->cmp_a);
	if (ft_deque_get_size(tmp_dq->a, tmp_dq->a->front, tmp_dq->a->back)
		!= tmp_dq->a->size)
		ret = 0;
	ft_deque_free(tmp_op);
	ft_dq_free(tmp_dq);
	return (ret);
}

static void	_do_dfs(t_dq *dq, t_deque *op, t_deque *res, int ope)
{
	ft_deque_push_back(op, ope);
	dfs(dq, op, res);
	ft_deque_pop_back(op);
}

static void	dfs(t_dq *dq, t_deque *op, t_deque *res)
{
	int	mini;
	int	size;

	size = ft_deque_get_size(op, op->front, op->back);
	mini = ft_deque_get_size(res, res->front, res->back);
	if (size >= dq->a->size * 2 - 1)
		return ;
	if (ft_deque_is_sorted(dq->a, dq->cmp_a))
		if (ft_deque_get_size(dq->a, dq->a->front, dq->a->back) == dq->a->size)
			return ;
	if (_run_op(dq, op) == 1)
	{
		if (mini > ft_deque_get_size(op, op->front, op->back))
			ft_deque_copy(res, op);
		return ;
	}
	if (!ft_deque_is_empty(dq->a))
	{
		_do_dfs(dq, op, res, PB);
		if (ft_deque_get_size(dq->a, dq->a->front, dq->a->back) > 1)
		{
			if (ft_deque_get_back(op) != SA)
				_do_dfs(dq, op, res, SA);
			_do_dfs(dq, op, res, RA);
			_do_dfs(dq, op, res, RRA);
		}
	}
	_do_dfs(dq, op, res, PA);
	if (ft_deque_get_size(dq->b, dq->b->front, dq->b->back) > 1)
	{
		if (ft_deque_get_back(op) != SB)
			_do_dfs(dq, op, res, SB);
		_do_dfs(dq, op, res, RB);
		_do_dfs(dq, op, res, RRB);
	}
	if (ft_deque_get_size(dq->a, dq->a->front, dq->a->back) > 1
		&& ft_deque_get_size(dq->b, dq->b->front, dq->b->back) > 1)
	{
		if (ft_deque_get_back(op) != SB)
			_do_dfs(dq, op, res, SS);
		_do_dfs(dq, op, res, RR);
		_do_dfs(dq, op, res, RRR);
	}
}

static void	_init_res(t_deque *res)
{
	int	i;

	i = 0;
	while (i < res->size)
	{
		ft_deque_push_back(res, NON);
		i++;
	}
}

void	ft_dq_sort(t_dq *dq)
{
	t_deque	*op;
	t_deque	*res;
	int		mini;

	op = ft_deque_init(OPSIZE);
	if (op == NULL)
		ft_exit("Error\n");
	res = ft_deque_init(OPSIZE);
	if (res == NULL)
		ft_exit("Error\n");
	_init_res(res);
	mini = 0;
	if (dq->a->size <= 5)
	{
		dfs(dq, op, res);
		ft_op_put_dq(res);
	}
	ft_deque_free(op);
	ft_deque_free(res);
}
