/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoghomo <lsoghomo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 15:58:03 by lsoghomo          #+#    #+#             */
/*   Updated: 2021/06/15 15:58:04 by lsoghomo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <common/common.h>

void	swap_a(t_mem *mem)
{
	swap_private(&(mem->a));
	if (mem->print)
		ft_putstr("sa");
}

void	swap_b(t_mem *mem)
{
	swap_private(&(mem->b));
	if (mem->print)
		ft_putstr("sb");
}

void	swap_b_a(t_mem *mem)
{
	swap_private(&(mem->b));
	swap_private(&(mem->a));
	if (mem->print)
		ft_putstr("ss");
}

void	push_b(t_mem *mem)
{
	push_top_x1_on_x2(&(mem->a), &(mem->b));
	if (mem->print)
		ft_putstr("pb");
}

void	push_a(t_mem *mem)
{
	push_top_x1_on_x2(&(mem->b), &(mem->a));
	if (mem->print)
		ft_putstr("pa");
}
