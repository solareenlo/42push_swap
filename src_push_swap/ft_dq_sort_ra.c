/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dq_sort_ra.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 02:37:49 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/23 17:31:55 by tayamamo         ###   ########.fr       */
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
		ft_putendl_fd("A", 1);
		ft_deque_put(dq->a);
		ft_putendl_fd("B", 1);
		ft_deque_put(dq->b);
		printf("type:%d\n", ft_deque_get_type4(dq->a));
		int	type = ft_deque_get_type4(dq->a);
		if (type == 0)
			ft_deque_ra_type_0(dq);
		else if (type == 1)
			ft_deque_ra_type_1(dq);
		else if (type == 2)
		ft_putendl_fd("A", 1);
		ft_deque_put(dq->a);
		ft_op_put_dq(op[1]);
		ft_op_run_dq2(dq, op[1]);
		ft_deque_pop_front(n);
	}
	ft_deque_free(op[0]);
	ft_deque_free(op[1]);
}
