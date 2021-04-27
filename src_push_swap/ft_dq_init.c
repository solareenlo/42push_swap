/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dq_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 15:34:32 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/28 08:09:05 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	*_dq_free(t_dq *dq)
{
	if (dq->a != NULL)
		ft_deque_free(dq->a);
	if (dq->b != NULL)
		ft_deque_free(dq->b);
	if (dq != NULL)
		free(dq);
	return (NULL);
}

t_dq	*ft_dq_init(int size)
{
	t_dq	*new;

	new = ft_calloc(1, sizeof(t_dq));
	if (new == NULL)
		return (NULL);
	new->a = ft_deque_init(size);
	if (new->a == NULL)
		return (_dq_free(new));
	new->b = ft_deque_init(size);
	if (new->b == NULL)
		return (_dq_free(new));
	new->sorted = ft_deque_init(size);
	if (new->sorted == NULL)
		return (_dq_free(new));
	new->cmp_a = ft_cmp_ascending_order;
	new->cmp_b = ft_cmp_descending_order;
	new->aa = A;
	new->bb = B;
	return (new);
}
