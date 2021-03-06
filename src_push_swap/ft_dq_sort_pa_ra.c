/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dq_sort_pa_ra.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 02:23:52 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/26 06:55:29 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_dq_sort_pa_ra(t_dq *dq)
{
	int	size;

	size = ft_deque_get_size(dq->b, dq->b->front, dq->b->back);
	if (size == 1)
		ft_op_run_dq_pa_ra(dq);
	else if (size == 2)
		ft_dq_sort_pa_ra_2(dq);
	else if (size == 3)
		ft_dq_sort_pa_ra_3(dq);
	else if (size == 4)
		ft_dq_sort_pa_ra_4(dq);
}
