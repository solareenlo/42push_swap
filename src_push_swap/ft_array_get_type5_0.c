/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_get_type5_0.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 07:51:46 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/27 08:25:01 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_array_get_type5_0(int a[5], t_cmp *cmp)
{
	if (cmp(&a[0], &a[1]) < 0)
	{
		if (cmp(&a[1], &a[2]) < 0)
		{
			if (cmp(&a[2], &a[3]) < 0)
			{
				if (cmp(&a[3], &a[4]) < 0)
					return (0);
				if (cmp(&a[2], &a[4]) < 0)
					return (1);
				if (cmp(&a[1], &a[4]) < 0)
					return (3);
				if (cmp(&a[0], &a[4]) < 0)
					return (9);
				return (33);
			}
			if (cmp(&a[2], &a[4]) < 0)
			{
				if (cmp(&a[1], &a[3]) < 0)
					return (2);
				if (cmp(&a[0], &a[3]) < 0)
					return (8);
				return (32);
			}
			if (cmp(&a[1], &a[4]) < 0)
			{
				if (cmp(&a[4], &a[3]) < 0)
					return (5);
				if (cmp(&a[3], &a[0]) < 0)
					return (34);
				if (cmp(&a[1], &a[3]) < 0)
					return (4);
				return (10);
			}
			if (cmp(&a[0], &a[4]) < 0)
			{
				if (cmp(&a[3], &a[0]) < 0)
					return (40);
				if (cmp(&a[1], &a[3]) < 0)
					return (11);
				if (cmp(&a[3], &a[4]) < 0)
					return (16);
				return (17);
			}
			if (cmp(&a[3], &a[4]) < 0)
				return (64);
			if (cmp(&a[3], &a[0]) < 0)
				return (65);
			if (cmp(&a[1], &a[3]) < 0)
				return (35);
			return (41);
		}
		if (cmp(&a[1], &a[3]) < 0)
		{
			if (cmp(&a[3], &a[4]) < 0)
			{
				if (cmp(&a[0], &a[2]) < 0)
					return (6);
				return (30);
			}
			if (cmp(&a[0], &a[2]) < 0)
			{
				if (cmp(&a[4], &a[0]) < 0)
					return (39);
				if (cmp(&a[2], &a[4]) < 0)
				{
					if (cmp(&a[1], &a[4]) < 0)
						return (7);
					return (13);
				}
				return (15);
			}
			if (cmp(&a[2], &a[4]) < 0)
			{
				if (cmp(&a[0], &a[4]) < 0)
				{
					if (cmp(&a[1], &a[4]) < 0)
						return (31);
					return (37);
				}
				return (61);
			}
			return (63);
		}
		if (cmp(&a[2], &a[3]) < 0)
		{
			if (cmp(&a[4], &a[2]) < 0)
			{
				if (cmp(&a[0], &a[2]) < 0)
				{
					if (cmp(&a[0], &a[4]) < 0)
						return (21);
					return (45);
				}
				if (cmp(&a[0], &a[3]) < 0)
					return (69);
				return (93);
			}
			if (cmp(&a[0], &a[2]) < 0)
			{
				if (cmp(&a[3], &a[4]) < 0)
				{
					if (cmp(&a[1], &a[4]) < 0)
						return (12);
					return (18);
				}
				return (19);
			}
			if (cmp(&a[3], &a[4]) < 0)
			{
				if (cmp(&a[0], &a[3]) < 0)
				{
					if (cmp(&a[1], &a[4]) < 0)
						return (36);
					return (42);
				}
				if (cmp(&a[1], &a[4]) < 0)
					return (60);
				if (cmp(&a[0], &a[4]) < 0)
					return (66);
				return (90);
			}
			if (cmp(&a[0], &a[4]) < 0)
				return (43);
			if (cmp(&a[0], &a[3]) < 0)
				return (67);
			return (91);
		}
		if (cmp(&a[0], &a[3]) < 0)
		{
			if (cmp(&a[4], &a[0]) < 0)
				return (47);
			if (cmp(&a[2], &a[4]) < 0)
			{
				if (cmp(&a[1], &a[4]) < 0)
					return (14);
				return (20);
			}
			if (cmp(&a[3], &a[4]) < 0)
				return (22);
			return (23);
		}
		if (cmp(&a[4], &a[3]) < 0)
		{
			if (cmp(&a[0], &a[2]) < 0)
				return (71);
			return (95);
		}
		if (cmp(&a[2], &a[4]) < 0)
		{
			if (cmp(&a[0], &a[2]) < 0)
			{
				if (cmp(&a[1], &a[4]) < 0)
					return (38);
				return (44);
			}
			if (cmp(&a[1], &a[4]) < 0)
				return (62);
			if (cmp(&a[0], &a[4]) < 0)
				return (68);
			return (92);
		}
		if (cmp(&a[0], &a[4]) < 0)
		{
			return (46);
			if (cmp(&a[0], &a[2]) < 0)
				return (70);
			return (94);
		}
		if (cmp(&a[0], &a[2]) < 0)
			return (70);
		return (94);
	}
	return (-1);
}
