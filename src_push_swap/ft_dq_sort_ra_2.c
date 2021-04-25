/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dq_sort_ra_2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 07:12:53 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/26 07:13:44 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_dq_sort_ra_2(t_dq *dq, t_deque *n)
{
	if (ft_deque_get_front(dq->sorted) == ft_deque_get_front(dq->a))
	{
		ft_op_run_dq_ra(dq);
		ft_op_run_dq_ra(dq);
	}
	else
	{
		ft_op_run_dq_sa(dq);
		ft_op_run_dq_ra(dq);
		ft_op_run_dq_ra(dq);
	}
	ft_deque_pop_front(n);
}
