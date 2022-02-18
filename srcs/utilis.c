#include "push_swap.h"

void	print_list(t_list *a, t_list *b)
{
	while (a)
	{
		printf("content=%d   %d\n", a->content, a->num);
		a = a->next;
	}
	printf("---------\n");
	while (b)
	{
		printf("content=%d   %d\n", b->content, b->num);
		b = b->next;
	}
}
