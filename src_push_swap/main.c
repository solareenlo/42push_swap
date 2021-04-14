/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 07:38:05 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/15 07:45:39 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	_deque_init_a(t_deque *dq, char *argv[])
{
	int	i;

	i = 0;
	while (i < dq->size && argv != NULL)
	{
		ft_deque_push_back(dq, ft_atoi(argv[i + 1]));
		i++;
	}
}

int	main(int argc, char *argv[])
{
	t_deque	*dq[2];

	if (argc == 1)
		return (0);
	if (ft_check_int(argc, argv) == 1)
		return (ft_put_error("Error int\n"));
	dq[0] = ft_deque_init(argc - 1);
	if (dq[0] == NULL)
		return (ft_put_error("Error init A\n"));
	_deque_init_a(dq[0], argv);
	dq[1] = ft_deque_init(argc - 1);
	if (dq[1] == NULL)
		ft_exit("Error init B\n");
	if (ft_check_duq(dq[0]->val, dq[1]->val, dq[0]->back + 1,
			ft_cmp_ascending_order) == 1)
		return (ft_exit("Error dup\n"));
	if (ft_array_is_sorted(dq[0]->val, dq[0]->size, ft_cmp_ascending_order) == 0)
		/* ft_deque_sort(dq[0], dq[1], dq[0]->size, ft_cmp_ascending_order); */
	ft_putendl_fd("A", 1);
	ft_deque_put(dq[0]);
	ft_putendl_fd("B", 1);
	ft_deque_put(dq[1]);
	ft_deque_free(dq[0]);
	ft_deque_free(dq[1]);
	return (0);
}

