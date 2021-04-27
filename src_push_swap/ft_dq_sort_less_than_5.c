/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dq_sort_less_than_5.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 19:04:03 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/27 11:01:46 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_dq_sort_less_than_5(t_dq *dq)
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
	ft_dq_dfs_a(dq, size, op);
	ft_op_put_dq(op[1]);
	ft_op_run_dq2(dq, op[1]);
	/* ft_deque_sort5(dq, ft_deque_get_type5(dq->a, ft_cmp_ascending_order)); */
	ft_deque_free(op[0]);
	ft_deque_free(op[1]);
}
