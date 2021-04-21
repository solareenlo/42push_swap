/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op_run_dq_ra.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 03:59:57 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/22 04:00:21 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_op_run_dq_ra(t_dq *dq)
{
	ft_op_run_dq(dq, RA);
	ft_op_put(RA);
	ft_deque_pop_front(dq->sorted);
}
