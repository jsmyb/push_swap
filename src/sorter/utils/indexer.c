/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoghomo <lsoghomo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 15:58:37 by lsoghomo          #+#    #+#             */
/*   Updated: 2021/06/15 16:00:11 by lsoghomo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sorter/sorter.h>

void	tag_list(t_list *start, t_mem *mem)
{
	int	i;

	i = 0;
	while (start)
	{
		start->index = i++;
		start = start->next_sort;
	}
	mem->max = i;
}

