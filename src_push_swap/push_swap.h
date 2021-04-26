/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 07:38:43 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/27 08:15:32 by tayamamo         ###   ########.fr       */
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
# define A		'a'
# define B		'b'
# define OPSIZE	10

typedef struct s_dq
{
	t_deque	*a;
	t_deque	*b;
	t_deque	*sorted;
	int		(*cmp_a)(const void *a, const void *b);
	int		(*cmp_b)(const void *a, const void *b);
	char	aa;
	char	bb;
}	t_dq;

int		ft_check_int(int argc, char *argv[]);
int		ft_check_duq(int *a, int *b, size_t n, t_cmp *cmp);
int		ft_cmp_ascending_order(const void *a, const void *b);
int		ft_cmp_descending_order(const void *a, const void *b);
int		ft_deque_get_type4(t_deque *dq);
int		ft_deque_get_type5(t_deque *dq, t_cmp *cmp);
int		ft_array_get_type5(int a[5], t_cmp *cmp);
int		ft_array_get_type5_0(int a[5], t_cmp *cmp);
int		ft_array_get_type5_1(int a[5], t_cmp *cmp);
int		ft_array_get_type5_2(int a[5], t_cmp *cmp);
int		ft_array_get_type5_3(int a[5], t_cmp *cmp);
int		ft_array_get_type5_4(int a[5], t_cmp *cmp);
int		ft_array_get_type5_5(int a[5], t_cmp *cmp);
void	ft_deque_ra_type_0(t_dq *dq);
void	ft_deque_ra_type_1(t_dq *dq);
void	ft_deque_ra_type_2(t_dq *dq);
void	ft_deque_ra_type_3(t_dq *dq);
void	ft_deque_ra_type_4(t_dq *dq);
void	ft_deque_ra_type_5(t_dq *dq);
void	ft_deque_ra_type_6(t_dq *dq);
void	ft_deque_ra_type_7(t_dq *dq);
void	ft_deque_ra_type_8(t_dq *dq);
void	ft_deque_ra_type_9(t_dq *dq);
void	ft_deque_ra_type_10(t_dq *dq);
void	ft_deque_ra_type_11(t_dq *dq);
void	ft_deque_ra_type_12(t_dq *dq);
void	ft_deque_ra_type_13(t_dq *dq);
void	ft_deque_ra_type_14(t_dq *dq);
void	ft_deque_ra_type_15(t_dq *dq);
void	ft_deque_ra_type_16(t_dq *dq);
void	ft_deque_ra_type_17(t_dq *dq);
void	ft_deque_ra_type_18(t_dq *dq);
void	ft_deque_ra_type_19(t_dq *dq);
void	ft_deque_ra_type_20(t_dq *dq);
void	ft_deque_ra_type_21(t_dq *dq);
void	ft_deque_ra_type_22(t_dq *dq);
void	ft_deque_ra_type_23(t_dq *dq);
void	ft_deque_pa_ra_type_0(t_dq *dq);
void	ft_deque_pa_ra_type_1(t_dq *dq);
void	ft_deque_pa_ra_type_2(t_dq *dq);
void	ft_deque_pa_ra_type_3(t_dq *dq);
void	ft_deque_pa_ra_type_4(t_dq *dq);
void	ft_deque_pa_ra_type_5(t_dq *dq);
void	ft_deque_pa_ra_type_6(t_dq *dq);
void	ft_deque_pa_ra_type_7(t_dq *dq);
void	ft_deque_pa_ra_type_8(t_dq *dq);
void	ft_deque_pa_ra_type_9(t_dq *dq);
void	ft_deque_pa_ra_type_10(t_dq *dq);
void	ft_deque_pa_ra_type_11(t_dq *dq);
void	ft_deque_pa_ra_type_12(t_dq *dq);
void	ft_deque_pa_ra_type_13(t_dq *dq);
void	ft_deque_pa_ra_type_14(t_dq *dq);
void	ft_deque_pa_ra_type_15(t_dq *dq);
void	ft_deque_pa_ra_type_16(t_dq *dq);
void	ft_deque_pa_ra_type_17(t_dq *dq);
void	ft_deque_pa_ra_type_18(t_dq *dq);
void	ft_deque_pa_ra_type_19(t_dq *dq);
void	ft_deque_pa_ra_type_20(t_dq *dq);
void	ft_deque_pa_ra_type_21(t_dq *dq);
void	ft_deque_pa_ra_type_22(t_dq *dq);
void	ft_deque_pa_ra_type_23(t_dq *dq);
t_dq	*ft_dq_init(int size);
void	ft_dq_free(t_dq *dq);
void	ft_dq_copy(t_dq *dst, t_dq *src);
void	ft_dq_sort(t_dq *dq);
void	ft_dq_sort_init_op(t_deque *op);
void	ft_dq_sort_less_than_5(t_dq *dq);
void	ft_dq_sort_less_than_10(t_dq *dq);
void	ft_dq_sort_pa_ra(t_dq *dq);
void	ft_dq_sort_pa_ra_2(t_dq *dq);
void	ft_dq_sort_pa_ra_3(t_dq *dq);
void	ft_dq_sort_pa_ra_4(t_dq *dq);
void	ft_dq_sort_ra(t_dq *dq, t_deque *n);
void	ft_dq_sort_ra_2(t_dq *dq, t_deque *n);
void	ft_dq_sort_ra_3(t_dq *dq, t_deque *n);
void	ft_dq_sort_ra_4(t_dq *dq, t_deque *n);
void	ft_dq_sort_rra(t_dq *dq, int size);
int		ft_dq_cmp_with_med_from_a_to_b_first(t_dq *dq, int size);
int		ft_dq_cmp_with_med_from_a_to_b(t_dq *dq, int size);
int		ft_dq_cmp_with_med_from_b_to_a(t_dq *dq, int size);
void	ft_dq_dfs_a(t_dq *dq, int n, t_deque *op[]);
void	ft_dq_dfs_a_back(t_dq *dq, int n, t_deque *op[]);
void	ft_dq_dfs_b(t_dq *dq, int n, t_deque *op[]);
void	ft_op_put(int op);
void	ft_op_put_dq(t_deque *op);
void	ft_op_run_dq_pb(t_dq *dq);
void	ft_op_run_dq_sb(t_dq *dq);
void	ft_op_run_dq_rb(t_dq *dq);
void	ft_op_run_dq_pa(t_dq *dq);
void	ft_op_run_dq_sa(t_dq *dq);
void	ft_op_run_dq_ra(t_dq *dq);
void	ft_op_run_dq_ss(t_dq *dq);
void	ft_op_run_dq_pa_ra(t_dq *dq);
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
void	ft_deque_push_to_other_ff(t_deque *from, t_deque *to, int size,
			char *s);
void	ft_deque_push_to_me_bf(t_deque *from, int size, char *s);
void	ft_deque_push_to_me_fb(t_deque *from, int size, char *s);
int		ft_exit(char *s);

#endif
