/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dq_sort_pa_ra_4.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 06:54:15 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/26 07:04:33 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	_dq_sort_pa_ra_4_2(t_dq *dq, int type)
{
	if (type == 17)
		ft_deque_pa_ra_type_17(dq);
	else if (type == 18)
		ft_deque_pa_ra_type_18(dq);
	else if (type == 19)
		ft_deque_pa_ra_type_19(dq);
	else if (type == 20)
		ft_deque_pa_ra_type_20(dq);
	else if (type == 21)
		ft_deque_pa_ra_type_21(dq);
	else if (type == 22)
		ft_deque_pa_ra_type_22(dq);
	else if (type == 23)
		ft_deque_pa_ra_type_23(dq);
}

static void	_dq_sort_pa_ra_4_1(t_dq *dq, int type)
{
	if (type == 10)
		ft_deque_pa_ra_type_10(dq);
	else if (type == 11)
		ft_deque_pa_ra_type_11(dq);
	else if (type == 12)
		ft_deque_pa_ra_type_12(dq);
	else if (type == 13)
		ft_deque_pa_ra_type_13(dq);
	else if (type == 14)
		ft_deque_pa_ra_type_14(dq);
	else if (type == 15)
		ft_deque_pa_ra_type_15(dq);
	else if (type == 16)
		ft_deque_pa_ra_type_16(dq);
	else
		_dq_sort_pa_ra_4_2(dq, type);
}

void	ft_dq_sort_pa_ra_4(t_dq *dq)
{
	int	type;

	type = ft_deque_get_type4(dq->b);
	if (type == 0)
		ft_deque_pa_ra_type_0(dq);
	else if (type == 1)
		ft_deque_pa_ra_type_1(dq);
	else if (type == 2)
		ft_deque_pa_ra_type_2(dq);
	else if (type == 3)
		ft_deque_pa_ra_type_3(dq);
	else if (type == 4)
		ft_deque_pa_ra_type_4(dq);
	else if (type == 5)
		ft_deque_pa_ra_type_5(dq);
	else if (type == 6)
		ft_deque_pa_ra_type_6(dq);
	else if (type == 7)
		ft_deque_pa_ra_type_7(dq);
	else if (type == 8)
		ft_deque_pa_ra_type_8(dq);
	else if (type == 9)
		ft_deque_pa_ra_type_9(dq);
	else
		_dq_sort_pa_ra_4_1(dq, type);
}
