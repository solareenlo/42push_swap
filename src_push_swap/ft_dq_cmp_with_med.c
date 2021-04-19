/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dq_cmp_with_med.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 03:57:48 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/19 04:41:15 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_deque	*ft_dq_cmp_with_med_from_a_to_b(t_dq *dq, int size)
{
	t_deque	*res;
	int		m[2];
	int		i;
	int		x;

	res = ft_deque_init(2);
	if (res == NULL)
		return (NULL);
	m[0] = ft_deque_get_median(dq->a, size, dq->cmp_a);
	i = 0;
	while (i < size)
	{
		x = ft_deque_get_front(dq->a);
		if (dq->cmp_a(&x, &m[0]) <= 0)
		{
			ft_op_run_dq(dq, PB);
			res->val[0]++;
		}
		else
		{
			ft_op_run_dq(dq, RA);
		}
		i++;
	}
	return (res);
}