/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dq_sort_ra_4_1.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 17:37:04 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/23 17:44:52 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	ft_deque_ra_type_5(t_dq *dq)
{
	ft_op_run_dq_ra(dq);
	ft_op_run_dq(dq, PB);
	ft_op_put(PB);
	ft_op_run_dq(dq, PB);
	ft_op_put(PB);
	ft_op_run_dq_ra(dq);
	ft_op_run_dq_pa_ra(dq);
	ft_op_run_dq_pa_ra(dq);
}

void	ft_deque_ra_type_6(t_dq *dq)
{
	ft_op_run_dq(dq, PB);
	ft_op_put(PB);
	ft_op_run_dq_ra(dq);
	ft_op_run_dq_pa_ra(dq);
	ft_op_run_dq_ra(dq);
	ft_op_run_dq_ra(dq);
}

void	ft_deque_ra_type_7(t_dq *dq)
{
	ft_op_run_dq(dq, PB);
	ft_op_put(PB);
	ft_op_run_dq_ra(dq);
	ft_op_run_dq_pa_ra(dq);
	ft_op_run_dq(dq, SA);
	ft_op_put(SA);
	ft_op_run_dq_ra(dq);
	ft_op_run_dq_ra(dq);
}

void	ft_deque_ra_type_8(t_dq *dq)
{
	ft_op_run_dq(dq, PB);
	ft_op_put(PB);
	ft_op_run_dq(dq, SA);
	ft_op_put(SA);
	ft_op_run_dq_ra(dq);
	ft_op_run_dq_pa_ra(dq);
	ft_op_run_dq_ra(dq);
	ft_op_run_dq_ra(dq);
}

void	ft_deque_ra_type_9(t_dq *dq)
{
	ft_op_run_dq(dq, PB);
	ft_op_put(PB);
	ft_op_run_dq(dq, PB);
	ft_op_put(PB);
	ft_op_run_dq(dq, SA);
	ft_op_put(SA);
	ft_op_run_dq_ra(dq);
	ft_op_run_dq(dq, PA);
	ft_op_put(PA);
	ft_op_run_dq(dq, PA);
	ft_op_put(PA);
	ft_op_run_dq_ra(dq);
	ft_op_run_dq_ra(dq);
	ft_op_run_dq_ra(dq);
}
