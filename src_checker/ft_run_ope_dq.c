/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_run_ope_dq.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 20:42:33 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/11 23:10:31 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static	void	_run_rrr(t_deque *a, t_deque *b, char *op)
{
	int	tmp;

	if ((ft_strncmp("rra", op, ft_strlen("rra") + 1) == 0
			|| ft_strncmp("rrr", op, ft_strlen("rrr") + 1) == 0)
		&& ft_deque_is_empty(a) == 0)
	{
		tmp = ft_deque_get_back(a);
		ft_deque_pop_back(a);
		ft_deque_push_front(a, tmp);
	}
	if ((ft_strncmp("rrb", op, ft_strlen("rrb") + 1) == 0
			|| ft_strncmp("rrr", op, ft_strlen("rrr") + 1) == 0)
		&& ft_deque_is_empty(b) == 0)
	{
		tmp = ft_deque_get_back(b);
		ft_deque_pop_back(b);
		ft_deque_push_front(b, tmp);
	}
}

static	void	_run_rr(t_deque *a, t_deque *b, char *op)
{
	int	tmp;

	if ((ft_strncmp("ra", op, ft_strlen("ra") + 1) == 0
			|| ft_strncmp("rr", op, ft_strlen("rr") + 1) == 0)
		&& ft_deque_is_empty(a) == 0)
	{
		tmp = ft_deque_get_front(a);
		ft_deque_pop_front(a);
		ft_deque_push_back(a, tmp);
	}
	if ((ft_strncmp("rb", op, ft_strlen("rb") + 1) == 0
			|| ft_strncmp("rr", op, ft_strlen("rr") + 1) == 0)
		&& ft_deque_is_empty(b) == 0)
	{
		tmp = ft_deque_get_front(b);
		ft_deque_pop_front(b);
		ft_deque_push_back(b, tmp);
	}
}

void	ft_run_ope_dq(t_deque *a, t_deque *b, char *op)
{
	int	tmp;

	if (ft_strncmp("sa", op, ft_strlen("sa") + 1) == 0
		|| ft_strncmp("ss", op, ft_strlen("ss") + 1) == 0)
		ft_deque_swap_front(a);
	if (ft_strncmp("sb", op, ft_strlen("sb") + 1) == 0
		|| ft_strncmp("ss", op, ft_strlen("ss") + 1) == 0)
		ft_deque_swap_front(b);
	if (ft_strncmp("pa", op, ft_strlen("pa") + 1) == 0
		&& ft_deque_is_empty(b) == 0)
	{
		tmp = ft_deque_get_front(b);
		ft_deque_pop_front(b);
		ft_deque_push_front(a, tmp);
	}
	if (ft_strncmp("pb", op, ft_strlen("pb") + 1) == 0
		&& ft_deque_is_empty(a) == 0)
	{
		tmp = ft_deque_get_front(a);
		ft_deque_pop_front(a);
		ft_deque_push_front(b, tmp);
	}
	_run_rr(a, b, op);
	_run_rrr(a, b, op);
}
