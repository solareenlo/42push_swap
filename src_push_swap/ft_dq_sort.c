/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dq_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 16:34:22 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/21 18:47:42 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void _op_run_dq(t_dq *dq, t_deque *op)
{
	int	ope;
	t_deque	*cpy;

	cpy = ft_deque_init(op->size);
	ft_deque_copy(cpy, op);
	while (!ft_deque_is_empty(cpy))
	{
		ope = ft_deque_get_front(cpy);
		if (ope != NON)
			ft_op_run_dq(dq, ope);
		ft_deque_pop_front(cpy);
	}
}

static void	_init_res(t_deque *res)
{
	int	i;

	while (!ft_deque_is_empty(res))
		ft_deque_pop_back(res);
	i = 0;
	while (i < res->size)
	{
		ft_deque_push_back(res, NON);
		i++;
	}
}

void	ft_dq_sort(t_dq *dq)
{
	t_deque	*op[2];
	int		size;
	t_dq	*tmp;

	op[0] = ft_deque_init(OPSIZE);
	if (op[0] == NULL)
		ft_exit("Error\n");
	op[1] = ft_deque_init(OPSIZE);
	if (op[1] == NULL)
		ft_exit("Error\n");
	_init_res(op[1]);
	if (dq->a->size <= 5)
	{
		size = ft_deque_get_size(dq->a, dq->a->front, dq->a->back);
		ft_dq_dfs_a(dq, size, op);
		ft_op_put_dq(op[1]);
		_op_run_dq(dq, op[1]);
	}
	else if (dq->a->size <= 10)
	{
		size = ft_deque_get_size(dq->a, dq->a->front, dq->a->back);
		ft_dq_cmp_with_med_from_a_to_b(dq, size);
		size = ft_deque_get_size(dq->a, dq->a->front, dq->a->back);
		tmp = ft_dq_init(dq->a->size);
		ft_dq_copy(tmp, dq);
		while (!ft_deque_is_empty(tmp->b))
			ft_deque_pop_front(tmp->b);
		ft_dq_dfs_a(tmp, size, op);
		ft_op_put_dq(op[1]);
		_op_run_dq(dq, op[1]);
		_init_res(op[1]);
		ft_dq_free(tmp);
		tmp = ft_dq_init(dq->a->size);
		ft_dq_copy(tmp, dq);
		while (!ft_deque_is_empty(tmp->a))
			ft_deque_pop_front(tmp->a);
		ft_dq_dfs_b(tmp, dq->a->size - size, op);
		ft_op_put_dq(op[1]);
		_op_run_dq(dq, op[1]);
		_init_res(op[1]);
		ft_dq_free(tmp);
		while (!ft_deque_is_empty(dq->b))
		{
			ft_op_run_dq(dq, PA);
			ft_op_put(PA);
		}
	}
	else
	{
		size = ft_deque_get_size(dq->a, dq->a->front, dq->a->back);
		ft_dq_cmp_with_med_from_a_to_b(dq, size);
		size = ft_deque_get_size(dq->b, dq->b->front, dq->b->back);
		ft_dq_cmp_with_med_from_b_to_a(dq, size);
	}
	ft_deque_free(op[0]);
	ft_deque_free(op[1]);
}
