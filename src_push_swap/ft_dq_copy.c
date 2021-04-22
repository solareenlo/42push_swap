/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dq_copy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 04:09:22 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/22 18:25:45 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_dq_copy(t_dq *dst, t_dq *src)
{
	ft_deque_copy(dst->a, src->a);
	ft_deque_copy(dst->b, src->b);
	ft_deque_copy(dst->sorted, src->sorted);
}
