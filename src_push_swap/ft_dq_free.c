/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dq_free.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 16:28:38 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/28 07:51:10 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_dq_free(t_dq *dq)
{
	if (dq)
	{
		if (dq->a)
			free(dq->a);
		if (dq->b)
			free(dq->b);
		if (dq->sorted)
			free(dq->sorted);
		free(dq);
	}
}
