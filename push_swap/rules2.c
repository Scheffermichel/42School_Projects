#include "push_swap.h"

void	ft_rb(t_stack **b)
{
	t_stack *tmp;

	if (!*b || !(*b)->next)
		return ;
	tmp = *b;
	*b = ft_lstlast(*b);
	(*b)->next = tmp;
	(*b) = tmp->next;
	tmp->next = NULL;
	write(1, "rb\n", 3);	
}

void	ft_sb(t_stack **b)
{
	t_stack *tmp;

	if (!*b || !(*b)->next)
		return ;
	tmp = *b;
	*b = (*b)->next;
	tmp->next = (*b)->next;
	(*b)->next = tmp;
	write(1, "sa\n", 3);	
}

void	ft_pb(t_stack **b, t_stack **a)
{
	t_stack *tmp;

	if (!*a)
		return ;
	tmp = *b;
	*b = *a;
	*a = (*a)->next;
	(*b)->next = tmp;
	write(1, "pb\n", 3);
}

void	ft_rrb(t_stack **b)
{
	t_stack *tmp;
	int		i;

	if (!*b || !(*b)->next)
		return ;
	i = 0;	
	tmp = *b;
	while ((*b)->next)
	{
		i++;
		*b = (*b)->next;
	}
	(*b)->next = tmp;
	while (i > 1)
	{
		tmp = tmp->next;
		i--;
	}
	tmp->next = NULL;
	write(1, "rrb\n", 4);
}
