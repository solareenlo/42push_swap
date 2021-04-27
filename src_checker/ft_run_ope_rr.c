/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_run_ope_rr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 05:04:02 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/28 05:45:25 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static void	_run_ra(t_deque *a, t_deque *b, int option)
{
	int	tmp;

	if (ft_deque_is_empty(a) == 0)
	{
		tmp = ft_deque_get_front(a);
		ft_deque_pop_front(a);
		ft_deque_push_back(a, tmp);
	}
	ft_display_stack(a, b, option);
}

static void	_run_rb(t_deque *a, t_deque *b, int option)
{
	int	tmp;

	if (ft_deque_is_empty(b) == 0)
	{
		tmp = ft_deque_get_front(b);
		ft_deque_pop_front(b);
		ft_deque_push_back(b, tmp);
	}
	ft_display_stack(a, b, option);
}

static void	_run_rr(t_deque *a, t_deque *b, int option)
{
	int	tmp;

	if (ft_deque_is_empty(a) == 0)
	{
		tmp = ft_deque_get_front(a);
		ft_deque_pop_front(a);
		ft_deque_push_back(a, tmp);
	}
	if (ft_deque_is_empty(b) == 0)
	{
		tmp = ft_deque_get_front(b);
		ft_deque_pop_front(b);
		ft_deque_push_back(b, tmp);
	}
	ft_display_stack(a, b, option);
}

void	ft_run_ope_rr(t_deque *a, t_deque *b, char *op, int option)
{
	if (ft_strncmp("ra", op, ft_strlen("ra") + 1) == 0)
		_run_ra(a, b, option);
	if (ft_strncmp("rb", op, ft_strlen("rb") + 1) == 0)
		_run_rb(a, b, option);
	if (ft_strncmp("rr", op, ft_strlen("rr") + 1) == 0)
		_run_rr(a, b, option);
}
