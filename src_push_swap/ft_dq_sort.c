/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dq_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 16:34:22 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/22 06:00:54 by tayamamo         ###   ########.fr       */
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
		ft_dq_sort_less_than_5(dq, op);
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
		size = ft_deque_get_size(dq->b, dq->b->front, dq->b->back);
		if (size == 1)
			ft_op_run_dq_pa_ra(dq);
		else if (size == 2)
		{
			if (ft_deque_is_sorted(dq->b, dq->cmp_a))
			{
				ft_op_run_dq_pa_ra(dq);
				ft_op_run_dq_pa_ra(dq);
			}
			else
			{
				ft_op_run_dq(dq, RB);
				ft_op_put(RB);
				ft_op_run_dq_pa_ra(dq);
				ft_op_run_dq_pa_ra(dq);
			}
		}
		else if (size == 3)
		{
			if (ft_deque_is_sorted(dq->b, dq->cmp_a))
			{
				ft_op_run_dq_pa_ra(dq);
				ft_op_run_dq_pa_ra(dq);
				ft_op_run_dq_pa_ra(dq);
			}
			else if (ft_deque_is_sorted(dq->b, dq->cmp_b))
			{
				ft_op_run_dq(dq, PA);
				ft_op_put(PA);
				ft_op_run_dq(dq, PA);
				ft_op_put(PA);
				ft_op_run_dq(dq, PA);
				ft_op_put(PA);
				ft_op_run_dq_ra(dq);
				ft_op_run_dq_ra(dq);
				ft_op_run_dq_ra(dq);
			}
			else
			{
				if (ft_deque_get_front(dq->sorted) == ft_deque_get_front(dq->b))
				{
					ft_op_run_dq_pa_ra(dq);
					ft_op_run_dq(dq, PA);
					ft_op_put(PA);
					ft_op_run_dq(dq, PA);
					ft_op_put(PA);
					ft_op_run_dq_ra(dq);
					ft_op_run_dq_ra(dq);
				}
				else
				{
					ft_op_run_dq(dq, PA);
					ft_op_put(PA);
					if (ft_deque_get_front(dq->sorted) == ft_deque_get_front_second(dq->b))
					{
						ft_op_run_dq_pa_ra(dq);
						if (ft_deque_get_front(dq->a) < ft_deque_get_front(dq->b))
						{
							ft_op_run_dq_ra(dq);
							ft_op_run_dq_pa_ra(dq);
						}
						else
						{
							ft_op_run_dq_pa_ra(dq);
							ft_op_run_dq_ra(dq);
						}
					}
					else
					{
						ft_op_run_dq(dq, SB);
						ft_op_put(SB);
						ft_op_run_dq_pa_ra(dq);
						ft_op_run_dq_ra(dq);
						ft_op_run_dq_pa_ra(dq);
					}
				}
			}
		}
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
		size = ft_deque_get_front(n);
		if (size == 2)
		{
			ft_op_run_dq(dq, SA);
			ft_op_put(SA);
			ft_op_run_dq_ra(dq);
			ft_op_run_dq_ra(dq);
			ft_deque_pop_front(n);
		}
		else if (size == 3)
		{
			ft_op_run_dq(dq, PB);
			ft_op_put(PB);
			if (ft_deque_get_front(dq->sorted) == ft_deque_get_front(dq->a))
			{
				ft_op_run_dq_ra(dq);
				if (ft_deque_get_front(dq->sorted) == ft_deque_get_front(dq->a))
				{
					ft_op_run_dq_ra(dq);
					ft_op_run_dq_pa_ra(dq);
				}
				else
				{
					ft_op_run_dq_pa_ra(dq);
					ft_op_run_dq_ra(dq);
				}
			}
			else
			{
				ft_op_run_dq(dq, SA);
				ft_op_put(SA);
				ft_op_run_dq_ra(dq);
				if (ft_deque_get_front(dq->sorted) == ft_deque_get_front(dq->a))
				{
					ft_op_run_dq_ra(dq);
					ft_op_run_dq_pa_ra(dq);
				}
				else
				{
					ft_op_run_dq_pa_ra(dq);
					ft_op_run_dq_ra(dq);
				}
			}
			ft_deque_pop_front(n);
		}
		else if (size == 4)
		{
			ft_op_run_dq(dq, PB);
			ft_op_put(PB);
			if (ft_deque_get_front(dq->sorted) == ft_deque_get_front(dq->a))
			{
				ft_op_run_dq_ra(dq);
				if (ft_deque_get_front(dq->sorted) == ft_deque_get_front(dq->a))
				{
					ft_op_run_dq_ra(dq);
					if (ft_deque_get_front(dq->sorted) == ft_deque_get_front(dq->a))
					{
						ft_op_run_dq_ra(dq);
						ft_op_run_dq_pa_ra(dq);
					}
					else
					{
						ft_op_run_dq_pa_ra(dq);
						ft_op_run_dq_ra(dq);
					}
				}
				else
				{
					ft_op_run_dq(dq, SA);
					ft_op_put(SA);
					if (ft_deque_get_front(dq->sorted) == ft_deque_get_front(dq->a))
					{
						ft_op_run_dq_ra(dq);
						if (ft_deque_get_front(dq->sorted) == ft_deque_get_front(dq->a))
						{
							ft_op_run_dq_ra(dq);
							ft_op_run_dq_pa_ra(dq);
						}
						else
						{
							ft_op_run_dq_pa_ra(dq);
							ft_op_run_dq_ra(dq);
						}
					}
					else
					{
						ft_op_run_dq_pa_ra(dq);
						if (ft_deque_get_front(dq->sorted) == ft_deque_get_front(dq->a))
						{
							ft_op_run_dq_ra(dq);
							ft_op_run_dq_ra(dq);
						}
						else
						{
							ft_op_run_dq(dq, SA);
							ft_op_put(SA);
							ft_op_run_dq_ra(dq);
							ft_op_run_dq_ra(dq);
						}
					}
				}
			}
			ft_deque_pop_front(n);
		}
		ft_deque_put(n);
	}
	ft_deque_free(op[0]);
	ft_deque_free(op[1]);
}
