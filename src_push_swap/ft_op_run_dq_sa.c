/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op_run_dq_sa.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 07:07:29 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/26 07:08:01 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_op_run_dq_sa(t_dq *dq)
{
	ft_op_run_dq(dq, SA);
	ft_op_put(SA);
}
