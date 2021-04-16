/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op_put_dq.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 19:32:08 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/17 06:22:29 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_op_put_dq(t_deque *op)
{
	int		i;
	int		n;
	int		x;
	t_deque	*cpy;

	cpy = ft_deque_init(op->size);
	ft_deque_copy(cpy, op);
	n = ft_deque_get_size(op, op->front, op->back);
	i = 0;
	while (i < n)
	{
		x = ft_deque_get_front(cpy);
		ft_deque_pop_front(cpy);
		if (x == SA)
			ft_putendl_fd("sa", 1);
		else if (x == SB)
			ft_putendl_fd("sb", 1);
		else if (x == SS)
			ft_putendl_fd("ss", 1);
		else if (x == PA)
			ft_putendl_fd("pa", 1);
		else if (x == PB)
			ft_putendl_fd("pb", 1);
		else if (x == RA)
			ft_putendl_fd("ra", 1);
		else if (x == RB)
			ft_putendl_fd("rb", 1);
		else if (x == RR)
			ft_putendl_fd("rr", 1);
		else if (x == RRA)
			ft_putendl_fd("rra", 1);
		else if (x == RRB)
			ft_putendl_fd("rrb", 1);
		else if (x == RRR)
			ft_putendl_fd("rrr", 1);
		else if (x == NON)
			ft_putendl_fd("non", 1);
		i++;
	}
	ft_deque_free(cpy);
}
