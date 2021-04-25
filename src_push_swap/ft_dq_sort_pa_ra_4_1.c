/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dq_sort_pa_ra_4_1.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 19:03:49 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/26 07:44:44 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_deque_pa_ra_type_5(t_dq *dq)
{
	ft_op_run_dq_pa_ra(dq);
	ft_op_run_dq_pa(dq);
	ft_op_run_dq_pa(dq);
	ft_op_run_dq_pa(dq);
	ft_op_run_dq_ra(dq);
	ft_op_run_dq_ra(dq);
	ft_op_run_dq_ra(dq);
}

void	ft_deque_pa_ra_type_6(t_dq *dq)
{
	ft_op_run_dq_pa(dq);
	ft_op_run_dq_pa_ra(dq);
	ft_op_run_dq_ra(dq);
	ft_op_run_dq_pa_ra(dq);
	ft_op_run_dq_pa_ra(dq);
}

void	ft_deque_pa_ra_type_7(t_dq *dq)
{
	ft_op_run_dq_pa(dq);
	ft_op_run_dq_pa_ra(dq);
	ft_op_run_dq_ra(dq);
	ft_op_run_dq_pa(dq);
	ft_op_run_dq_pa(dq);
	ft_op_run_dq_ra(dq);
	ft_op_run_dq_ra(dq);
}

void	ft_deque_pa_ra_type_8(t_dq *dq)
{
	ft_op_run_dq_pa(dq);
	ft_op_run_dq_sb(dq);
	ft_op_run_dq_pa_ra(dq);
	ft_op_run_dq_ra(dq);
	ft_op_run_dq_pa_ra(dq);
	ft_op_run_dq_pa_ra(dq);
}

void	ft_deque_pa_ra_type_9(t_dq *dq)
{
	ft_op_run_dq_pa(dq);
	ft_op_run_dq_pa(dq);
	ft_op_run_dq_ss(dq);
	ft_op_run_dq_pa_ra(dq);
	ft_op_run_dq_ra(dq);
	ft_op_run_dq_ra(dq);
	ft_op_run_dq_pa_ra(dq);
}
