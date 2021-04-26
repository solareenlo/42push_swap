#include <stdio.h>
#include "libft/libft.h"

int	ft_cmp_ascending_order(const void *a, const void *b)
{
	const int	*aa;
	const int	*bb;

	aa = a;
	bb = b;
	if (*aa < *bb)
		return (-1);
	else if (*aa > *bb)
		return (1);
	else
		return (0);
}

/* static void	ft_array_put(int a[], int size) */
/* { */
/* 	int	i; */
/*  */
/* 	i = 0; */
/* 	while (i < size) */
/* 	{ */
/* 		ft_putnbr_fd(a[i], 1); */
/* 		ft_putstr_fd(" ", 1); */
/* 		i++; */
/* 	} */
/* 	ft_putstr_fd("\n", 1); */
/* } */

int	ft_array_get_type5(int a[5], t_cmp *cmp)
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
			if (cmp(&a[0], &a[2]) <0)
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
	if (cmp(&a[0], &a[2]) < 0)
	{
		if (cmp(&a[2], &a[3]) < 0)
		{
			if (cmp(&a[4], &a[1]) < 0)
				return (57);
			if (cmp(&a[3], &a[4]) < 0)
				return (24);
			if (cmp(&a[2], &a[4]) < 0)
				return (25);
			if (cmp(&a[0], &a[4]) < 0)
				return (27);
			return (51);
		}
		if (cmp(&a[4], &a[1]) < 0)
		{
			if (cmp(&a[3], &a[4]) < 0)
				return (88);
			if (cmp(&a[3], &a[1]) < 0)
				return (89);
			if (cmp(&a[0], &a[3]) < 0)
				return (59);
			return (83);
		}
		if (cmp(&a[3], &a[1]) < 0)
		{
			if (cmp(&a[4], &a[0]) < 0)
				return (82);
			if (cmp(&a[2], &a[4]) < 0)
				return (56);
			return (58);
		}
		if (cmp(&a[0], &a[3]) < 0)
		{
			if (cmp(&a[3], &a[4]) < 0)
			{
				if (cmp(&a[2], &a[4]) < 0)
					return (26);
				return (28);
			}
			if (cmp(&a[0], &a[4]) < 0)
				return (29);
			return (53);
		}
			if (cmp(&a[0], &a[4]) < 0)
			{
				if (cmp(&a[2], &a[4]) < 0)
					return (50);
				return (52);
			}
			if (cmp(&a[3], &a[4]) < 0)
				return (76);
			return (77);
	}
	if (cmp(&a[0], &a[3]) < 0)
	{
		if (cmp(&a[1], &a[2]) < 0)
		{
			if (cmp(&a[4], &a[1]) < 0)
				return (81);
			if (cmp(&a[0], &a[4]) < 0)
			{
				if (cmp(&a[3], &a[4]) < 0)
					return (48);
				return (49);
			}
				if (cmp(&a[2], &a[4]) < 0)
					return (73);
				return (75);
		}
		if (cmp(&a[4], &a[2]) < 0)
			return (87);
		if (cmp(&a[0], &a[4]) < 0)
		{
			if (cmp(&a[3], &a[4]) < 0)
				return (54);
			return (55);
		}
		if (cmp(&a[1], &a[4]) < 0)
			return (79);
		return (85);
	}
	if (cmp(&a[0], &a[4]) < 0)
	{
		if (cmp(&a[1], &a[2]) < 0)
		{
			if (cmp(&a[3], &a[1]) < 0)
				return (80);
			if (cmp(&a[2], &a[3]) < 0)
				return (72);
			return (74);
		}
		if (cmp(&a[3], &a[2]) < 0)
			return (86);
		if (cmp(&a[1], &a[3]) < 0)
			return (78);
		return (84);
	}
	if (cmp(&a[1], &a[2]) < 0)
	{
		if (cmp(&a[3], &a[4]) < 0)
		{
			if (cmp(&a[1], &a[3]) < 0)
			{
				if (cmp(&a[2], &a[3]) < 0)
					return (96);
				if (cmp(&a[2], &a[4]) < 0)
					return (98);
				return (100);
			}
			if (cmp(&a[4], &a[1]) < 0)
				return (112);
			if (cmp(&a[2], &a[4]) < 0)
				return (104);
			return (106);
		}
		if (cmp(&a[1], &a[4]) < 0)
		{
			if (cmp(&a[3], &a[2]) < 0)
				return (101);
			if (cmp(&a[2], &a[4]) < 0)
				return (97);
			return (99);
		}
		if (cmp(&a[3], &a[1]) < 0)
			return (113);
		if (cmp(&a[2], &a[3]) < 0)
			return (105);
		return (107);
	}
	if (cmp(&a[2], &a[3]) < 0)
	{
		if (cmp(&a[1], &a[4]) < 0)
		{
			if (cmp(&a[1], &a[3]) < 0)
			{
				if (cmp(&a[3], &a[4]) < 0)
					return (102);
				return (103);
			}
			return (108);
		}
		if (cmp(&a[2], &a[4]) < 0)
		{
			if (cmp(&a[3], &a[4]) < 0)
				return (114);
			if (cmp(&a[1], &a[3]) < 0)
				return (109);
			return (115);
		}
		if (cmp(&a[1], &a[3]) < 0)
			return (111);
		return (117);
	}
	if (cmp(&a[2], &a[4]) < 0)
	{
		if (cmp(&a[1], &a[4]) < 0)
			return (110);
		return (116);
	}
	if (cmp(&a[3], &a[4]) < 0)
		return (118);
	return (119);
}

int	main(void)
{
	int	a[120][5] = { {0,1,2,3,4}, {0,1,2,4,3}, {0,1,3,2,4}, {0,1,3,4,2}, {0,1,4,2,3}, {0,1,4,3,2}, {0,2,1,3,4}, {0,2,1,4,3}, {0,2,3,1,4}, {0,2,3,4,1}, {0,2,4,1,3}, {0,2,4,3,1}, {0,3,1,2,4}, {0,3,1,4,2}, {0,3,2,1,4}, {0,3,2,4,1}, {0,3,4,1,2},{0,3,4,2,1},{0,4,1,2,3},{0,4,1,3,2},{0,4,2,1,3},{0,4,2,3,1},{0,4,3,1,2},{0,4,3,2,1},{1,0,2,3,4},{1,0,2,4,3},{1,0,3,2,4},{1,0,3,4,2},{1,0,4,2,3},{1,0,4,3,2},{1,2,0,3,4},{1,2,0,4,3},{1,2,3,0,4},{1,2,3,4,0},{1,2,4,0,3},{1,2,4,3,0},{1,3,0,2,4},{1,3,0,4,2},{1,3,2,0,4},{1,3,2,4,0},{1,3,4,0,2},{1,3,4,2,0},{1,4,0,2,3},{1,4,0,3,2},{1,4,2,0,3},{1,4,2,3,0},{1,4,3,0,2},{1,4,3,2,0},{2,0,1,3,4},{2,0,1,4,3},{2,0,3,1,4},{2,0,3,4,1},{2,0,4,1,3},{2,0,4,3,1},{2,1,0,3,4},{2,1,0,4,3},{2,1,3,0,4},{2,1,3,4,0},{2,1,4,0,3},{2,1,4,3,0},{2,3,0,1,4},{2,3,0,4,1},{2,3,1,0,4},{2,3,1,4,0},{2,3,4,0,1},{2,3,4,1,0},{2,4,0,1,3},{2,4,0,3,1},{2,4,1,0,3},{2,4,1,3,0},{2,4,3,0,1},{2,4,3,1,0},{3,0,1,2,4},{3,0,1,4,2},{3,0,2,1,4},{3,0,2,4,1},{3,0,4,1,2},{3,0,4,2,1},{3,1,0,2,4},{3,1,0,4,2},{3,1,2,0,4},{3,1,2,4,0},{3,1,4,0,2},{3,1,4,2,0},{3,2,0,1,4},{3,2,0,4,1},{3,2,1,0,4},{3,2,1,4,0},{3,2,4,0,1},{3,2,4,1,0},{3,4,0,1,2},{3,4,0,2,1},{3,4,1,0,2},{3,4,1,2,0},{3,4,2,0,1},{3,4,2,1,0},{4,0,1,2,3},{4,0,1,3,2},{4,0,2,1,3},{4,0,2,3,1},{4,0,3,1,2},{4,0,3,2,1},{4,1,0,2,3},{4,1,0,3,2},{4,1,2,0,3},{4,1,2,3,0},{4,1,3,0,2},{4,1,3,2,0},{4,2,0,1,3},{4,2,0,3,1},{4,2,1,0,3},{4,2,1,3,0},{4,2,3,0,1},{4,2,3,1,0},{4,3,0,1,2},{4,3,0,2,1},{4,3,1,0,2},{4,3,1,2,0},{4,3,2,0,1},{4,3,2,1,0}};
	int	i;

	i = 0;
	while (i < 120)
	{
		int	ret = ft_array_get_type5(a[i], ft_cmp_ascending_order);
		printf("ret:%d\n", ret);
		i++;
	}
	return (0);
}
