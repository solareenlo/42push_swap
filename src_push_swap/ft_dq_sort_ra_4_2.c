/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dq_sort_ra_4_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 17:45:23 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/23 17:52:02 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_deque_ra_type_10(t_dq *dq)
{
	ft_op_run_dq(dq, PB);
	ft_op_put(PB);
	ft_op_run_dq(dq, SA);
	ft_op_put(SA);
	ft_op_run_dq_ra(dq);
	ft_op_run_dq_pa_ra(dq);
	ft_op_run_dq(dq, SA);
	ft_op_put(SA);
	ft_op_run_dq_ra(dq);
	ft_op_run_dq_ra(dq);
}

void	ft_deque_ra_type_11(t_dq *dq)
{
	ft_op_run_dq(dq, PB);
	ft_op_put(PB);
	ft_op_run_dq(dq, PB);
	ft_op_put(PB);
	ft_op_run_dq(dq, SS);
	ft_op_put(SS);
	ft_op_run_dq_ra(dq);
	ft_op_run_dq_pa_ra(dq);
	ft_op_run_dq_ra(dq);
	ft_op_run_dq_pa_ra(dq);
}

void	ft_deque_ra_type_12(t_dq *dq)
{
	ft_op_run_dq(dq, PB);
	ft_op_put(PB);
	ft_op_run_dq_ra(dq);
	ft_op_run_dq_ra(dq);
	ft_op_run_dq_pa_ra(dq);
	ft_op_run_dq_ra(dq);
}

void	ft_deque_ra_type_13(t_dq *dq)
{
	ft_op_run_dq(dq, PB);
	ft_op_put(PB);
	ft_op_run_dq_ra(dq);
	ft_op_run_dq(dq, SA);
	ft_op_put(SA);
	ft_op_run_dq_ra(dq);
	ft_op_run_dq_pa_ra(dq);
	ft_op_run_dq_ra(dq);
}

void	ft_deque_ra_type_14(t_dq *dq)
{
	ft_op_run_dq(dq, PB);
	ft_op_put(PB);
	ft_op_run_dq(dq, SA);
	ft_op_put(SA);
	ft_op_run_dq_ra(dq);
	ft_op_run_dq_ra(dq);
	ft_op_run_dq_pa_ra(dq);
	ft_op_run_dq_ra(dq);
}
