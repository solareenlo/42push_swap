/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_deque_get_type5_1.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 22:01:19 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/26 22:24:48 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_array_put(int a[], int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_putnbr_fd(a[i], 1);
		ft_putstr_fd(" ", 1);
		i++;
	}
	ft_putstr_fd("\n", 1);
}

int	ft_array_get_type5(int a[5], t_cmp *cmp)
{
	if (cmp(&a[0], &a[1]) < 0)
	{
		if (cmp(&a[1], &a[2]) < 0)
		{
			if (cmp(&a[2], &a[3]) < 0)
			{
				if (cmp(&a[3], &a[4]) < 0)
					return (0);
				else
					return (1);
			}
			else if (cmp(&a[2], &a[4]) < 0)
			{
				if (cmp(&a[4], &a[3]) < 0)
				{
					ft_array_put(a, 5);
					return (2);
				}
				else
				{
					ft_array_put(a, 5);
					return (3);
				}
			}
		}
	}
	return (0);
}
