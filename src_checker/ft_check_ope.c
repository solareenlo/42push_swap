/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_ope.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 18:07:25 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/11 23:03:12 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	ft_check_ope(char *op)
{
	const char	*ops[] = {
		"sa", "sb", "ss", "pa", "pb", "ra", "rb", "rr", "rra", "rrb", "rrr",
		NULL
	};
	int			i;

	i = -1;
	while (ops[++i])
	{
		if (ft_strncmp(ops[i], op, ft_strlen(ops[i]) + 1) == 0)
			return (1);
	}
	return (0);
}
