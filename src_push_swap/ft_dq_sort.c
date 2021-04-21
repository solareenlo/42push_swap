/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dq_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 16:34:22 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/21 19:14:20 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_dq_sort(t_dq *dq)
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
	if (dq->a->size <= 5)
		ft_dq_sort_less_than_5(dq, op);
	else if (dq->a->size <= 10)
		ft_dq_sort_less_than_10(dq, op);
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
