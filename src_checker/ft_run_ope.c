/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_run_ope.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 20:42:33 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/28 05:44:27 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static void	_run_ss(t_deque *a, t_deque *b, char *op, int option)
{
	if (ft_strncmp("sa", op, ft_strlen("sa") + 1) == 0)
	{
		ft_deque_swap_front(a);
		ft_display_stack(a, b, option);
	}
	if (ft_strncmp("sb", op, ft_strlen("sb") + 1) == 0)
	{
		ft_deque_swap_front(b);
		ft_display_stack(a, b, option);
	}
	if (ft_strncmp("ss", op, ft_strlen("ss") + 1) == 0)
	{
		ft_deque_swap_front(a);
		ft_deque_swap_front(b);
		ft_display_stack(a, b, option);
	}
}

static void	_run_pa(t_deque *a, t_deque *b, int option)
{
	int	tmp;

	if (ft_deque_is_empty(b) == 0)
	{
		tmp = ft_deque_get_front(b);
		ft_deque_pop_front(b);
		ft_deque_push_front(a, tmp);
	}
	ft_display_stack(a, b, option);
}

static void	_run_pb(t_deque *a, t_deque *b, int option)
{
	int	tmp;

	if (ft_deque_is_empty(a) == 0)
	{
		tmp = ft_deque_get_front(a);
		ft_deque_pop_front(a);
		ft_deque_push_front(b, tmp);
	}
	ft_display_stack(a, b, option);
}

void	ft_run_ope(t_deque *a, t_deque *b, char *op, int option)
{
	_run_ss(a, b, op, option);
	if (ft_strncmp("pa", op, ft_strlen("pa") + 1) == 0)
		_run_pa(a, b, option);
	if (ft_strncmp("pb", op, ft_strlen("pb") + 1) == 0)
		_run_pb(a, b, option);
	ft_run_ope_rr(a, b, op, option);
	ft_run_ope_rrr(a, b, op, option);
}
