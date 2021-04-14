/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 07:38:43 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/15 07:44:28 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

int		ft_check_int(int argc, char *argv[]);
int		ft_check_duq(int *a, int *b, size_t n, t_cmp *cmp);
int		ft_cmp_ascending_order(const void *a, const void *b);
int		ft_cmp_descending_order(const void *a, const void *b);
void	ft_put_ope_push_to(char *s);
void	ft_put_ope_push_from(char *s);
void	ft_put_ope_reverse_rotate(char *s);
void	ft_put_ope_rrr(void);
void	ft_put_ope_rotate(char *s);
void	ft_put_ope_rr(void);
void	ft_put_ope_swap(char *s);
void	ft_put_ope_ss(void);
int		ft_exit(char *s);

#endif
