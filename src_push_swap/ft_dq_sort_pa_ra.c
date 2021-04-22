/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dq_sort_pa_ra.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 02:23:52 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/23 02:57:44 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_dq_sort_pa_ra(t_dq *dq)
{
	int	size;

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
				if (ft_deque_get_front(dq->sorted) == ft_deque_get_front(dq->b))
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
}
