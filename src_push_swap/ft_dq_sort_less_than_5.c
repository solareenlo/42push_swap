/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dq_sort_less_than_5.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 19:04:03 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/21 19:05:06 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_dq_sort_less_than_5(t_dq *dq, t_deque *op[])
{
	int	size;

	size = ft_deque_get_size(dq->a, dq->a->front, dq->a->back);
	ft_dq_dfs_a(dq, size, op);
	ft_op_put_dq(op[1]);
	ft_op_run_dq2(dq, op[1]);
}
