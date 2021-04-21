/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 07:38:43 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/21 19:05:35 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

# define SA		0x001
# define SB		0x002
# define SS		0x003
# define PA		0x004
# define PB		0x008
# define RA		0x010
# define RB		0x020
# define RR		0x030
# define RRA	0x040
# define RRB	0x080
# define RRR	0x0C0
# define NON	0x000
# define A		"a"
# define B		"b"
# define OPSIZE	9

typedef struct s_dq
{
	t_deque	*a;
	t_deque	*b;
	int		(*cmp_a)(const void *a, const void *b);
	int		(*cmp_b)(const void *a, const void *b);
	char	*aa;
	char	*bb;
}	t_dq;

int		ft_check_int(int argc, char *argv[]);
int		ft_check_duq(int *a, int *b, size_t n, t_cmp *cmp);
int		ft_cmp_ascending_order(const void *a, const void *b);
int		ft_cmp_descending_order(const void *a, const void *b);
t_dq	*ft_dq_init(int size);
void	ft_dq_free(t_dq *dq);
void	ft_dq_copy(t_dq *dst, t_dq *src);
void	ft_dq_sort(t_dq *dq);
void	ft_dq_sort_init_op(t_deque *op);
void	ft_dq_sort_less_than_5(t_dq *dq, t_deque *op[]);
t_deque	*ft_dq_cmp_with_med_from_a_to_b(t_dq *dq, int size);
t_deque	*ft_dq_cmp_with_med_from_b_to_a(t_dq *dq, int size);
void	ft_dq_dfs_a(t_dq *dq, int n, t_deque *op[]);
void	ft_dq_dfs_b(t_dq *dq, int n, t_deque *op[]);
void	ft_op_put(int op);
void	ft_op_put_dq(t_deque *op);
void	ft_op_run_dq(t_dq *dq, int op);
void	ft_op_run_dq2(t_dq *dq, t_deque *op);
void	ft_put_ope_push_to(char *s);
void	ft_put_ope_push_from(char *s);
void	ft_put_ope_reverse_rotate(char *s);
void	ft_put_ope_rrr(void);
void	ft_put_ope_rotate(char *s);
void	ft_put_ope_rr(void);
void	ft_put_ope_swap(char *s);
void	ft_put_ope_ss(void);
void	ft_deque_push_to_other_ff(t_deque *from, t_deque *to, int size, char *s);
void	ft_deque_push_to_me_bf(t_deque *from, int size, char *s);
void	ft_deque_push_to_me_fb(t_deque *from, int size, char *s);
int		ft_exit(char *s);

#endif
