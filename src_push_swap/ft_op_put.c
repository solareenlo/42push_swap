/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op_put.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 20:38:06 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/16 20:38:59 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_op_put(int op)
{
	if (op == SA)
		ft_putendl_fd("sa", 1);
	else if (op == SB)
		ft_putendl_fd("sb", 1);
	else if (op == SS)
		ft_putendl_fd("ss", 1);
	else if (op == PA)
		ft_putendl_fd("pa", 1);
	else if (op == PB)
		ft_putendl_fd("pb", 1);
	else if (op == RA)
		ft_putendl_fd("ra", 1);
	else if (op == RB)
		ft_putendl_fd("rb", 1);
	else if (op == RR)
		ft_putendl_fd("rr", 1);
	else if (op == RRA)
		ft_putendl_fd("rra", 1);
	else if (op == RRB)
		ft_putendl_fd("rrb", 1);
	else if (op == RRR)
		ft_putendl_fd("rrr", 1);
	else if (op == NON)
		ft_putendl_fd("non", 1);
}
