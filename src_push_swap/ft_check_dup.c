/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_dup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 22:18:46 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/11 22:21:19 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_duq(int *a, int *b, size_t n, t_cmp *cmp)
{
	size_t	i;

	ft_memmove(b, a, n * sizeof(int));
	ft_qsort_int(b, 0, n - 1, cmp);
	i = 0;
	while (i < n - 1)
	{
		if (b[i + 1] - b[i] == 0)
		{
			ft_bzero(b, n * sizeof(int));
			return (1);
		}
		i++;
	}
	ft_bzero(b, n * sizeof(int));
	return (0);
}
