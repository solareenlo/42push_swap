/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dq_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 16:34:22 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/25 04:30:06 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_dq_sort(t_dq *dq)
{
	t_deque	*op[2];
	int		size;
	int		ret;
	t_deque	*n;

	op[0] = ft_deque_init(OPSIZE);
	if (op[0] == NULL)
		ft_exit("Error\n");
	op[1] = ft_deque_init(OPSIZE);
	if (op[1] == NULL)
		ft_exit("Error\n");
	ft_dq_sort_init_op(op[1]);
	if (dq->a->size <= 5)
		ft_dq_sort_less_than_5(dq);
	else if (dq->a->size <= 10)
		ft_dq_sort_less_than_10(dq, op);
	else
	{
		n = ft_deque_init(dq->a->size);
		size = ft_deque_get_size(dq->a, dq->a->front, dq->a->back);
		ret = ft_dq_cmp_with_med_from_a_to_b_first(dq, size);
		ft_deque_push_front(n, ret);
		size = ft_deque_get_size(dq->b, dq->b->front, dq->b->back);
		while (size > 3)
		{
			ret = ft_dq_cmp_with_med_from_b_to_a(dq, size);
			size = ft_deque_get_size(dq->b, dq->b->front, dq->b->back);
			if (ret != 0)
				ft_deque_push_front(n, ret);
		}
		ft_dq_sort_pa_ra(dq);
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
		ft_dq_sort_ra(dq, n);
		size = ft_deque_get_front(n);
		ft_deque_pop_front(n);
		ret = ft_dq_cmp_with_med_from_a_to_b(dq, size);
		ft_deque_push_front(n, ret);
		ft_dq_sort_pa_ra(dq);
		ft_dq_sort_ra(dq, n);
		ft_deque_free(n);
	}
	ft_deque_free(op[0]);
	ft_deque_free(op[1]);
}
