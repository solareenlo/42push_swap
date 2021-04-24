/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dq_sort_pa_ra_4_2.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 19:08:52 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/23 19:34:12 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_deque_pa_ra_type_10(t_dq *dq)
{
	ft_op_run_dq(dq, PA);
	ft_op_put(PA);
	ft_op_run_dq(dq, PA);
	ft_op_put(PA);
	ft_op_run_dq_pa_ra(dq);
	ft_op_run_dq(dq, SA);
	ft_op_put(SA);
	ft_op_run_dq_ra(dq);
	ft_op_run_dq_pa_ra(dq);
	ft_op_run_dq_ra(dq);
}

void	ft_deque_pa_ra_type_11(t_dq *dq)
{
	ft_op_run_dq(dq, PA);
	ft_op_put(PA);
	ft_op_run_dq(dq, PA);
	ft_op_put(PA);
	ft_op_run_dq(dq, SS);
	ft_op_put(SS);
	ft_op_run_dq_pa_ra(dq);
	ft_op_run_dq_ra(dq);
	ft_op_run_dq_pa_ra(dq);
	ft_op_run_dq_ra(dq);
}

void	ft_deque_pa_ra_type_12(t_dq *dq)
{
	ft_op_run_dq(dq, PA);
	ft_op_put(PA);
	ft_op_run_dq_pa_ra(dq);
	ft_op_run_dq_pa_ra(dq);
	ft_op_run_dq_ra(dq);
	ft_op_run_dq_pa_ra(dq);
}

void	ft_deque_pa_ra_type_13(t_dq *dq)
{
	ft_op_run_dq(dq, PA);
	ft_op_put(PA);
	ft_op_run_dq_pa_ra(dq);
	ft_op_run_dq(dq, SB);
	ft_op_put(SB);
	ft_op_run_dq_pa_ra(dq);
	ft_op_run_dq_ra(dq);
	ft_op_run_dq_pa_ra(dq);
}

void	ft_deque_pa_ra_type_14(t_dq *dq)
{
	ft_op_run_dq(dq, PA);
	ft_op_put(PA);
	ft_op_run_dq(dq, PA);
	ft_op_put(PA);
	ft_op_run_dq_pa_ra(dq);
	ft_op_run_dq_ra(dq);
	ft_op_run_dq_ra(dq);
	ft_op_run_dq_pa_ra(dq);
}