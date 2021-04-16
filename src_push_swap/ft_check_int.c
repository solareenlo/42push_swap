/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 21:48:14 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/16 16:46:52 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	check_argv(char *argv)
{
	int		i;
	long	l;
	long	sign;

	i = 0;
	while (ft_isspace(argv[i]))
		i++;
	l = 0;
	sign = 1;
	if (argv[i] == '-' || argv[i] == '+')
	{
		if (argv[i] == '-')
			sign = -1;
		i++;
	}
	while (argv[i])
	{
		if (ft_isdigit(argv[i]) == 0)
			return (1);
		l = 10 * l + argv[i++] - '0';
		if ((sign == 1 && l > INTMAX)
			|| (sign == -1 && l > INTMIN))
			return (1);
	}
	return (0);
}

int	ft_check_int(int argc, char *argv[])
{
	int	i;

	if (argc == 1)
		return (1);
	i = 1;
	while (i < argc)
	{
		if (check_argv(argv[i]))
			return (1);
		i++;
	}
	return (0);
}
