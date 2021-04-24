/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dq_sort_less_than_10.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 19:10:13 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/25 04:55:34 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	_op_put_run(t_dq *dq, t_deque *op)
{
	ft_op_put_dq(op);
	ft_op_run_dq2(dq, op);
	ft_dq_sort_init_op(op);
}

static void	_run_dfs_a(t_dq *dq, t_deque *op[])
{
	t_dq	*tmp;
	int		size;

	tmp = ft_dq_init(dq->a->size);
	ft_dq_copy(tmp, dq);
	while (!ft_deque_is_empty(tmp->b))
		ft_deque_pop_front(tmp->b);
	size = ft_deque_get_size(dq->a, dq->a->front, dq->a->back);
	ft_dq_dfs_a(tmp, size, op);
	_op_put_run(dq, op[1]);
	ft_dq_free(tmp);
}

static void	_run_dfs_b(t_dq *dq, t_deque *op[])
{
	t_dq	*tmp;
	int		size;

	tmp = ft_dq_init(dq->a->size);
	ft_dq_copy(tmp, dq);
	while (!ft_deque_is_empty(tmp->a))
		ft_deque_pop_front(tmp->a);
	size = ft_deque_get_size(dq->a, dq->a->front, dq->a->back);
	ft_dq_dfs_b(tmp, dq->a->size - size, op);
	_op_put_run(dq, op[1]);
	ft_dq_free(tmp);
}

void	ft_dq_sort_less_than_10(t_dq *dq)
{
	t_deque	*op[2];
	int		size;

	op[0] = ft_deque_init(OPSIZE);
	if (op[0] == NULL)
		ft_exit("Error\n");
	op[1] = ft_deque_init(OPSIZE);
	if (op[1] == NULL)
		ft_exit("Error\n");
	ft_dq_sort_init_op(op[1]);
	size = ft_deque_get_size(dq->a, dq->a->front, dq->a->back);
	ft_dq_cmp_with_med_from_a_to_b_first(dq, size);
	_run_dfs_a(dq, op);
	_run_dfs_b(dq, op);
	while (!ft_deque_is_empty(dq->b))
	{
		ft_op_run_dq(dq, PA);
		ft_op_put(PA);
	}
	ft_deque_free(op[0]);
	ft_deque_free(op[1]);
}
