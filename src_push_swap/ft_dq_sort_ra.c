/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dq_sort_ra.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 02:37:49 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/24 22:53:59 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_dq_sort_ra(t_dq *dq, t_deque *n)
{
	int		size;
	t_deque	*op[2];

	op[0] = ft_deque_init(OPSIZE);
	if (op[0] == NULL)
		ft_exit("Error\n");
	op[1] = ft_deque_init(OPSIZE);
	if (op[1] == NULL)
		ft_exit("Error\n");
	ft_dq_sort_init_op(op[1]);
	size = ft_deque_get_front(n);
	if (size == 2)
	{
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
		ft_deque_pop_front(n);
	}
	else if (size == 3)
	{
		if (ft_deque_get_front(dq->sorted) == ft_deque_get_front(dq->a))
		{
			ft_op_run_dq_ra(dq);
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
		else
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
			}
		}
		ft_deque_pop_front(n);
	}
	else if (size == 4)
	{
		int	type = ft_deque_get_type4(dq->a);
		if (type == 0)
			ft_deque_ra_type_0(dq);
		else if (type == 1)
			ft_deque_ra_type_1(dq);
		else if (type == 2)
			ft_deque_ra_type_2(dq);
		else if (type == 3)
			ft_deque_ra_type_3(dq);
		else if (type == 4)
			ft_deque_ra_type_4(dq);
		else if (type == 5)
			ft_deque_ra_type_5(dq);
		else if (type == 6)
			ft_deque_ra_type_6(dq);
		else if (type == 7)
			ft_deque_ra_type_7(dq);
		else if (type == 8)
			ft_deque_ra_type_8(dq);
		else if (type == 9)
			ft_deque_ra_type_9(dq);
		else if (type == 10)
			ft_deque_ra_type_10(dq);
		else if (type == 11)
			ft_deque_ra_type_11(dq);
		else if (type == 12)
			ft_deque_ra_type_12(dq);
		else if (type == 13)
			ft_deque_ra_type_13(dq);
		else if (type == 14)
			ft_deque_ra_type_14(dq);
		else if (type == 15)
			ft_deque_ra_type_15(dq);
		else if (type == 16)
			ft_deque_ra_type_16(dq);
		else if (type == 17)
			ft_deque_ra_type_17(dq);
		else if (type == 18)
			ft_deque_ra_type_18(dq);
		else if (type == 19)
			ft_deque_ra_type_19(dq);
		else if (type == 20)
			ft_deque_ra_type_20(dq);
		else if (type == 21)
			ft_deque_ra_type_21(dq);
		else if (type == 22)
			ft_deque_ra_type_22(dq);
		else if (type == 23)
			ft_deque_ra_type_23(dq);
		ft_op_put_dq(op[1]);
		ft_op_run_dq2(dq, op[1]);
		ft_deque_pop_front(n);
	}
	ft_deque_free(op[0]);
	ft_deque_free(op[1]);
}
