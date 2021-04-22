/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dq_sort_rra.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 02:32:46 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/23 02:33:19 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_dq_sort_rra(t_dq *dq, int size)
{
	int i = 0;
	while (i < size)
	{
		ft_op_run_dq(dq, RRA);
		ft_op_put(RRA);
		i++;
	}
}
