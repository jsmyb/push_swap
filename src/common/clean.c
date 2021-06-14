#include <common/common.h>

void	clear_all(t_mem *mem)
{
	ft_free_list(&(mem->a));
	ft_free_list(&(mem->b));
}

void	exit_error(t_mem *mem)
{
	ft_puterr("Error");
	clear_all(mem);
	exit(EXIT_FAILURE);
}
