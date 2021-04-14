/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 22:06:07 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/11 22:08:32 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_cmp_ascending_order(const void *a, const void *b)
{
	const int	*aa;
	const int	*bb;

	aa = a;
	bb = b;
	if (*aa < *bb)
		return (-1);
	else if (*aa > *bb)
		return (1);
	else
		return (0);
}

int	ft_cmp_descending_order(const void *a, const void *b)
{
	const int	*aa;
	const int	*bb;

	aa = a;
	bb = b;
	if (*aa > *bb)
		return (-1);
	else if (*aa < *bb)
		return (1);
	else
		return (0);
}
