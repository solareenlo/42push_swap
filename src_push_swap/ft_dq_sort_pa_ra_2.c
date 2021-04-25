/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dq_sort_pa_ra_2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 06:50:34 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/26 06:51:03 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_dq_sort_pa_ra_2(t_dq *dq)
{
	if (ft_deque_is_sorted(dq->b, dq->cmp_a))
	{
		ft_op_run_dq_pa_ra(dq);
		ft_op_run_dq_pa_ra(dq);
	}
	else
	{
		ft_op_run_dq_rb(dq);
		ft_op_run_dq_pa_ra(dq);
		ft_op_run_dq_pa_ra(dq);
	}
}
