/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op_put_dq.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 19:32:08 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/20 16:46:36 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_op_put_dq(t_deque *op)
{
	int		i;
	int		size;
	int		x;
	t_deque	*cpy;

	cpy = ft_deque_init(op->size);
	ft_deque_copy(cpy, op);
	size = ft_deque_get_size(op, op->front, op->back);
	i = 0;
	while (i < size)
	{
		x = ft_deque_get_front(cpy);
		ft_deque_pop_front(cpy);
		if (x != NON)
			ft_op_put(x);
		i++;
	}
	ft_deque_free(cpy);
}
