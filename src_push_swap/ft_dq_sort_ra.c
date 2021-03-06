/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dq_sort_ra.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 02:37:49 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/26 07:29:41 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_dq_sort_ra(t_dq *dq, t_deque *n)
{
	int		size;

	size = ft_deque_get_front(n);
	if (size == 2)
		ft_dq_sort_ra_2(dq, n);
	else if (size == 3)
		ft_dq_sort_ra_3(dq, n);
	else if (size == 4)
		ft_dq_sort_ra_4(dq, n);
}
