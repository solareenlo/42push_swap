/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dq_sort_ra_4_3.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 17:52:30 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/23 17:58:06 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_deque_ra_type_15(t_dq *dq)
{
	ft_op_run_dq(dq, PB);
	ft_op_put(PB);
	ft_op_run_dq(dq, PB);
	ft_op_put(PB);
	ft_op_run_dq(dq, SA);
	ft_op_put(SA);
	ft_op_run_dq_ra(dq);
	ft_op_run_dq_pa_ra(dq);
	ft_op_run_dq_pa_ra(dq);
	ft_op_run_dq_ra(dq);
}

void	ft_deque_ra_type_16(t_dq *dq)
{
	ft_op_run_dq(dq, PB);
	ft_op_put(PB);
	ft_op_run_dq(dq, PB);
	ft_op_put(PB);
	ft_op_run_dq_ra(dq);
	ft_op_run_dq_ra(dq);
	ft_op_run_dq(dq, PA);
	ft_op_put(PA);
	ft_op_run_dq_pa_ra(dq);
	ft_op_run_dq_ra(dq);
}

void	ft_deque_ra_type_17(t_dq *dq)
{
	ft_op_run_dq(dq, PB);
	ft_op_put(PB);
	ft_op_run_dq(dq, PB);
	ft_op_put(PB);
	ft_op_run_dq(dq, SS);
	ft_op_put(SS);
	ft_op_run_dq_ra(dq);
	ft_op_run_dq_ra(dq);
	ft_op_run_dq_pa_ra(dq);
	ft_op_run_dq_pa_ra(dq);
}

void	ft_deque_ra_type_18(t_dq *dq)
{
	ft_op_run_dq(dq, PB);
	ft_op_put(PB);
	ft_op_run_dq_ra(dq);
	ft_op_run_dq_ra(dq);
	ft_op_run_dq_ra(dq);
	ft_op_run_dq_pa_ra(dq);
}

void	ft_deque_ra_type_19(t_dq *dq)
{
	ft_op_run_dq(dq, PB);
	ft_op_put(PB);
	ft_op_run_dq_ra(dq);
	ft_op_run_dq(dq, SA);
	ft_op_put(SA);
	ft_op_run_dq_ra(dq);
	ft_op_run_dq_ra(dq);
	ft_op_run_dq_pa_ra(dq);
}
