#include "push_swap.h"

t_list	*ft_lstnewfornum(int content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (new == NULL)
		return (NULL);
	new->num = content;
	new->next = NULL;
	return (new);
}

t_list	*delete_head(t_list *root)
{
	t_list	*temp;

	temp = root->next;
	free(root);
	return (temp);
}

void	ft_free_list(t_list *list)
{
	t_list	*temp;

	if (!list)
		return ;
	while (list)
	{
		temp = list->next;
		free(list);
		list = temp;
	}
}

int	find_max(t_list *a)
{
	int	number;

	number = a->num;
	a = a->next;
	while (a)
	{
		if (number < a->num)
			number = a->num;
		a = a->next;
	}
	return (number);
}

int	find_min(t_list *list)
{
	int	min;

	min = list->num;
	while (list->next)
	{
		if (min > list->next->num)
			min = list->next->num;
		list = list->next;
	}
	return (min);
}
