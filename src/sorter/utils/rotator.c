/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotator.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoghomo <lsoghomo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 15:58:39 by lsoghomo          #+#    #+#             */
/*   Updated: 2021/06/15 16:00:09 by lsoghomo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sorter/sorter.h>

void	double_rotate(t_mem *mem, int *rot_a, int *rot_b)
{
	while (*rot_a > 0 && *rot_b > 0)
	{
		(*rot_a)--;
		(*rot_b)--;
		rotate_b_a(mem);
	}
	while (*rot_a < 0 && *rot_b < 0)
	{
		(*rot_a)++;
		(*rot_b)++;
		rev_rotate_b_a(mem);
	}
}

void	rotate(t_mem *mem, int rot_a, int rot_b)
{
	double_rotate(mem, &rot_a, &rot_b);
	while (rot_a > 0)
	{
		rot_a--;
		rotate_a(mem);
	}
	while (rot_a < 0)
	{
		rot_a++;
		rev_rotate_a(mem);
	}
	while (rot_b > 0)
	{
		rot_b--;
		rotate_b(mem);
	}
	while (rot_b < 0)
	{
		rot_b++;
		rev_rotate_b(mem);
	}
}
