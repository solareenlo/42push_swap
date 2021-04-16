/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dq_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 15:34:32 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/16 18:17:39 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_dq	*ft_dq_init(int size)
{
	t_dq	*new;

	new = ft_calloc(1, sizeof(t_dq));
	if (new == NULL)
		return (NULL);
	new->a = ft_deque_init(size);
	if (new->a == NULL)
	{
		free(new);
		return (NULL);
	}
	new->b = ft_deque_init(size);
	if (new->b == NULL)
	{
		free(new->a);
		free(new);
		return (NULL);
	}
	new->cmp_a = ft_cmp_ascending_order;
	new->cmp_b = ft_cmp_descending_order;
	new->aa = A;
	new->bb = B;
	return (new);
}
