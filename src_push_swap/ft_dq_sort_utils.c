/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dq_sort_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 18:55:22 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/21 19:02:47 by tayamamo         ###   ########.fr       */
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
