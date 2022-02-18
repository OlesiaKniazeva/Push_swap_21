#include "push_swap.h"

int	*fill_massive(t_list *a, int size)
{
	int	*nums;
	int	*pointer;

	nums = malloc(sizeof(int) * size);
	pointer = nums;
	while (a)
	{
		*nums = a->content;
		a = a->next;
		nums++;
	}
	return (pointer);
}

int	*sort_massive(int *nums, int size)
{
	int	a;
	int	n;
	int	temp;

	a = 1;
	while (a < size)
	{
		n = a;
		while (n && nums[n - 1] > nums[n])
		{
			temp = nums[n - 1];
			nums[n - 1] = nums[n];
			nums[n] = temp;
			n--;
		}
		a++;
	}
	return (nums);
}

void	fill_order(t_list *a)
{
	t_list	*copy;
	int		*nums;
	int		size;
	int		c;

	copy = a;
	size = ft_lstsize(a);
	nums = fill_massive(a, size);
	nums = sort_massive(nums, size);
	while (a)
	{
		c = 0;
		while (nums[c] != a->content)
			c++;
		a->num = c;
		a = a->next;
	}
	free(nums);
}
