/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoghomo <lsoghomo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 15:58:26 by lsoghomo          #+#    #+#             */
/*   Updated: 2021/06/15 16:00:19 by lsoghomo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sorter/sorter.h>

int	main(int argc, char **argv)
{
	t_mem	mem;
	t_list	*start_tag;

	mem.a = NULL;
	mem.b = NULL;
	mem.print = 1;
	if (argc <= 1)
		return (0);
	read_args(argc, argv, &mem);
	if (!is_ordered(&mem))
	{
		start_tag = (mem.a);
		ft_list_sort(&start_tag);
		tag_list(start_tag, &mem);
		if (mem.max == 5)
			prepare_five(&mem);
		resolve(&mem, 1);
	}
	clear_all(&mem);
	start_tag = NULL;
	return (0);
}

