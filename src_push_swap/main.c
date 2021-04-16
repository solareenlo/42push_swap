/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 07:38:05 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/16 16:33:14 by tayamamo         ###   ########.fr       */
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
	t_dq	*dq;

	if (argc == 1)
		return (0);
	if (ft_check_int(argc, argv) == 1)
		return (ft_put_error("Error int\n"));
	dq = ft_dq_init(argc - 1);
	if (dq == NULL)
		return (ft_put_error("Error init A\n"));
	_deque_init_a(dq->a, argv);
	if (ft_check_duq(dq->a->val, dq->b->val, dq->a->back + 1, dq->cmp_a) == 1)
		return (ft_exit("Error dup\n"));
	if (ft_array_is_sorted(dq->a->val, dq->a->size, dq->cmp_a) == 0)
		/* ft_deque_sort(dq[0], dq[1], dq[0]->size, ft_cmp_ascending_order); */
	ft_putendl_fd("A", 1);
	ft_deque_put(dq->a);
	ft_putendl_fd("B", 1);
	ft_deque_put(dq->b);
	ft_dq_free(dq);
	return (0);
}
