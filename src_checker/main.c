/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 05:03:10 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/28 04:04:59 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./checker.h"

static inline int	cmp(const void *a, const void *b)
{
	const int	*aa;
	const int	*bb;

	bb = b;
	aa = a;
	if (*aa < *bb)
		return (-1);
	else if (*aa > *bb)
		return (1);
	else
		return (0);
}

static void	_deque_init(t_deque *dq, char *argv[])
{
	int	i;

	i = 0;
	while (i < dq->size && argv != NULL)
	{
		ft_deque_push_back(dq, ft_atoi(argv[i + 1]));
		i++;
	}
}

static inline void	_ret_is_1(t_deque *a, t_deque *b, char *op)
{
	if (ft_check_ope(op) == 1)
		ft_run_ope_dq(a, b, op);
	else
		ft_exit("Error\n");
}

static inline void	read_operation(t_deque *a, t_deque *b)
{
	char	*op;
	int		ret;

	while (42)
	{
		ret = get_next_line(0, &op);
		if (ret == -1)
			ft_exit("Error\n");
		if (ret == 0)
		{
			if (op[0] == '\0')
				break ;
			if (ft_check_ope(op) == 1)
				ft_run_ope_dq(a, b, op);
			else
				ft_exit("Error\n");
			break ;
		}
		if (ret == 1)
			_ret_is_1(a, b, op);
		free(op);
	}
	free(op);
}

int	main(int argc, char *argv[])
{
	t_deque	*dq[2];

	if (argc == 1)
		return (0);
	if (ft_check_int(argc, argv) == 1)
		return (ft_put_error("Error\n"));
	dq[0] = ft_deque_init(argc - 1);
	if (dq[0] == NULL)
		ft_exit("Error\n");
	_deque_init(dq[0], argv);
	dq[1] = ft_deque_init(argc - 1);
	if (dq[1] == NULL)
		ft_exit("Error\n");
	if (ft_check_dup(dq[0]->val, dq[1]->val, dq[0]->back + 1, cmp) == 1)
		ft_exit("Error dup\n");
	read_operation(dq[0], dq[1]);
	if (ft_deque_is_sorted(dq[0], cmp) && ft_deque_is_full(dq[0]))
		ft_putendl_fd("OK", 1);
	else
		ft_putendl_fd("NG", 1);
	ft_deque_free(dq[0]);
	ft_deque_free(dq[1]);
	return (0);
}
