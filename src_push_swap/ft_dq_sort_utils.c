/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dq_sort_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 18:55:22 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/28 02:37:26 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_op_run_dq2(t_dq *dq, t_deque *op)
{
	int		ope;
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

void	ft_dq_sort_init_op(t_deque *op)
{
	int	i;

	while (!ft_deque_is_empty(op))
		ft_deque_pop_back(op);
	i = 0;
	while (i < op->size)
	{
		ft_deque_push_back(op, NON);
		i++;
	}
}

void	ft_dq_sort_front_of_a_is_mini(t_dq *dq, t_deque *n)
{
	int	size;
	int	ret;

	size = 0;
	while (ft_deque_get_front(dq->sorted) == ft_deque_get_front(dq->a))
	{
		ft_op_run_dq_ra(dq);
		size++;
	}
	while (size > 0)
	{
		ret = ft_deque_get_front(n);
		ft_deque_pop_front(n);
		if (size < ret)
			ft_deque_push_front(n, ret - size);
		size -= ret;
	}
}
