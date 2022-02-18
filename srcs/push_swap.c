#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;

	b = NULL;
	ft_prov_args(argc, argv);
	a = add_to_struct(argv);
	check_duplicates(a);
	check_if_sorted(a);
	fill_order(a);
	new_sort_data(&a, &b);
	ft_free_list(a);
	return (0);
}
