/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 11:19:21 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/28 09:19:32 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static int	_is_int(char *argv, long l, int i, int sign)
{
	while (argv[i])
	{
		if (ft_isdigit(argv[i]) == 0)
			return (1);
		l = 10 * l + argv[i++] - '0';
		if ((sign == 1 && l > 0x000000007FFFFFFF)
			|| (sign == -1 && l > 0x0000000080000000))
			return (1);
	}
	return (0);
}

static int	_check_argv(char *argv)
{
	int		i;
	long	l;
	long	sign;

	i = 0;
	while (ft_isspace(argv[i]))
		i++;
	if (argv[i] == '\0')
		return (1);
	l = 0;
	sign = 1;
	if (argv[i] == '-' || argv[i] == '+')
	{
		if (argv[i] == '-')
			sign = -1;
		i++;
	}
	return (_is_int(argv, l, i, sign));
}

int	ft_check_int(int argc, char *argv[], int option)
{
	int	i;

	if (argc == 1 + option)
		return (1);
	i = 1 + option;
	while (i < argc)
	{
		if (_check_argv(argv[i]))
			return (1);
		i++;
	}
	return (0);
}
