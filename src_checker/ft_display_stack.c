/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 04:41:11 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/28 05:40:06 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_display_stack(t_deque *a, t_deque *b, int option)
{
	if (option)
	{
		ft_putstr_fd("\tA:", 1);
		if (ft_deque_is_empty(a))
			ft_putstr_fd("\n", 1);
		else
			ft_deque_put(a);
		ft_putstr_fd("\tB:", 1);
		if (ft_deque_is_empty(b))
			ft_putstr_fd("\n", 1);
		else
			ft_deque_put(b);
	}
}
