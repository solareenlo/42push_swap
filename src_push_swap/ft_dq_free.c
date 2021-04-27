/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dq_free.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 16:28:38 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/28 08:08:43 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_dq_free(t_dq *dq)
{
	if (dq)
	{
		if (dq->a)
			ft_deque_free(dq->a);
		if (dq->b)
			ft_deque_free(dq->b);
		if (dq->sorted)
			ft_deque_free(dq->sorted);
		free(dq);
	}
}
