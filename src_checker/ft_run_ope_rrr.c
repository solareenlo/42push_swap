/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_run_ope_rrr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 05:04:52 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/28 05:14:49 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static void	_run_rra(t_deque *a, t_deque *b)
{
	int	tmp;

	if (ft_deque_is_empty(a) == 0)
	{
		tmp = ft_deque_get_back(a);
		ft_deque_pop_back(a);
		ft_deque_push_front(a, tmp);
	}
	ft_display_stack(a, b);
}

static void	_run_rrb(t_deque *a, t_deque *b)
{
	int	tmp;

	if (ft_deque_is_empty(b) == 0)
	{
		tmp = ft_deque_get_back(b);
		ft_deque_pop_back(b);
		ft_deque_push_front(b, tmp);
	}
	ft_display_stack(a, b);
}

static void	_run_rrr(t_deque *a, t_deque *b)
{
	int	tmp;

	if (ft_deque_is_empty(a) == 0)
	{
		tmp = ft_deque_get_back(a);
		ft_deque_pop_back(a);
		ft_deque_push_front(a, tmp);
	}
	if (ft_deque_is_empty(b) == 0)
	{
		tmp = ft_deque_get_back(b);
		ft_deque_pop_back(b);
		ft_deque_push_front(b, tmp);
	}
	ft_display_stack(a, b);
}

void	ft_run_ope_rrr(t_deque *a, t_deque *b, char *op)
{
	if (ft_strncmp("rra", op, ft_strlen("rra") + 1) == 0)
		_run_rra(a, b);
	if (ft_strncmp("rrb", op, ft_strlen("rrb") + 1) == 0)
		_run_rrb(a, b);
	if (ft_strncmp("rrr", op, ft_strlen("rrr") + 1) == 0)
		_run_rrr(a, b);
}
