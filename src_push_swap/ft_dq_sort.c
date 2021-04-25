/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dq_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 16:34:22 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/26 06:43:08 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	_sort_pa_ra(t_dq *dq, t_deque *n)
{
	int	size;
	int	ret;

	size = ft_deque_get_size(dq->b, dq->b->front, dq->b->back);
	while (size > 4)
	{
		ret = ft_dq_cmp_with_med_from_b_to_a(dq, size);
		size = ft_deque_get_size(dq->b, dq->b->front, dq->b->back);
		if (ret != 0)
			ft_deque_push_front(n, ret);
	}
	ft_dq_sort_pa_ra(dq);
}

static void	_sort_front_of_a_is_mini(t_dq *dq, t_deque *n)
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

static void	_dq_cmp_with_med_from_a_to_b(t_dq *dq, t_deque *n)
{
	int	ret;

	if (!ft_deque_is_empty(n))
	{
		ret = ft_dq_cmp_with_med_from_a_to_b(dq, ft_deque_get_front(n));
		ft_deque_pop_front(n);
		ft_deque_push_front(n, ret);
	}
}

void	ft_dq_sort(t_dq *dq)
{
	int		ret;
	t_deque	*n;

	if (dq->a->size <= 5)
		ft_dq_sort_less_than_5(dq);
	else if (dq->a->size <= 10)
		ft_dq_sort_less_than_10(dq);
	else
	{
		n = ft_deque_init(dq->a->size);
		ret = ft_dq_cmp_with_med_from_a_to_b_first(dq,
				ft_deque_get_size(dq->a, dq->a->front, dq->a->back));
		ft_deque_push_front(n, ret);
		while (!ft_deque_is_empty(n))
		{
			_sort_pa_ra(dq, n);
			_sort_front_of_a_is_mini(dq, n);
			if (ft_deque_get_front(n) < 5)
				ft_dq_sort_ra(dq, n);
			_dq_cmp_with_med_from_a_to_b(dq, n);
		}
		ft_deque_free(n);
	}
}
