/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 08:19:40 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/28 05:07:39 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include <unistd.h>
# include "../libft/libft.h"

int		ft_check_int(int argc, char *argv[]);
int		ft_check_dup(int *a, int *b, size_t n, t_cmp *cmp);
int		ft_check_ope(char *op);
void	ft_run_ope(t_deque *a, t_deque *b, char *op);
void	ft_run_ope_rr(t_deque *a, t_deque *b, char *op);
void	ft_run_ope_rrr(t_deque *a, t_deque *b, char *op);
void	ft_display_stack(t_deque *a, t_deque *b);
void	ft_exit(char *s);

#endif
