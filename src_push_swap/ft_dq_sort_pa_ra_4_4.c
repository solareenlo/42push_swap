/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dq_sort_pa_ra_4_4.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 19:38:36 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/23 19:40:48 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_deque_pa_ra_type_20(t_dq *dq)
{
	ft_op_run_dq(dq, PA);
	ft_op_put(PA);
	ft_op_run_dq(dq, PA);
	ft_op_put(PA);
	ft_op_run_dq_pa_ra(dq);
	ft_op_run_dq_ra(dq);
	ft_op_run_dq_pa_ra(dq);
	ft_op_run_dq_ra(dq);
}

void	ft_deque_pa_ra_type_21(t_dq *dq)
{
	ft_op_run_dq(dq, PA);
	ft_op_put(PA);
	ft_op_run_dq(dq, PA);
	ft_op_put(PA);
	ft_op_run_dq(dq, SB);
	ft_op_put(SB);
	ft_op_run_dq_pa_ra(dq);
	ft_op_run_dq_ra(dq);
	ft_op_run_dq_pa_ra(dq);
	ft_op_run_dq_ra(dq);
}

void	ft_deque_pa_ra_type_22(t_dq *dq)
{
	ft_op_run_dq(dq, PA);
	ft_op_put(PA);
	ft_op_run_dq(dq, PA);
	ft_op_put(PA);
	ft_op_run_dq_pa_ra(dq);
	ft_op_run_dq_pa_ra(dq);
	ft_op_run_dq_ra(dq);
	ft_op_run_dq_ra(dq);
}

void	ft_deque_pa_ra_type_23(t_dq *dq)
{
	ft_op_run_dq(dq, PA);
	ft_op_put(PA);
	ft_op_run_dq(dq, PA);
	ft_op_put(PA);
	ft_op_run_dq(dq, SB);
	ft_op_put(SB);
	ft_op_run_dq_pa_ra(dq);
	ft_op_run_dq_pa_ra(dq);
	ft_op_run_dq_ra(dq);
	ft_op_run_dq_ra(dq);
}
