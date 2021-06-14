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

