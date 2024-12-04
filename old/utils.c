/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteofilo <eteofilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 01:51:51 by eteofilo          #+#    #+#             */
/*   Updated: 2024/11/29 06:23:22 by eteofilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int is_the_nb(t_list *stack1, t_list *stack2, int i)
{
	t_list *to_return;
	int j;
	int x;

	to_return = stack2;
	j = 0;
	x = i;
	while (stack2 != NULL)
	{
		i++;
		stack2 = stack2->next;
		if (stack2->nb < stack1->nb && stack2->nb > to_return->nb)
		{
			to_return = stack2;
			j = i;
			if (stack2->next == NULL)
				j = x + 1;
		}
	}
	return (j);
}

t_list *check_pos(t_list *stack1, t_list *stack2)
{
	int i;
	int j;
	int r;
	int x;
	t_list *tmp1;
	t_list *tmp2;
	t_list *to_return;
	t_list *to_push;

	i = 1;
	j = 0;
	r = 0;
	tmp1 = stack1;
	tmp2 = stack2;
	while (tmp1 != NULL)
	{

		to_return = tmp2;
		x = i;
		j = is_the_nb(stack1, stack2, i);
		if (j < r || r == 0)
		{
			r = j;
			to_push = tmp1;
		}
		tmp1 = tmp1->next;
		i++;
	}
	return(to_push);
}

void add_to_lst(t_list *node, t_list *stack)
{
	t_list *tmp;
	t_list *ret;

}

void pp(t_list **stack1, t_list **stack2)
{
	t_list *tmp;

	if (!*stack2)
	{
		*stack2 = *stack1;
		*stack1 = (*stack1)->next;
		(*stack2)->next = NULL;
	}
	else
	{
		tmp = *stack2;
		*stack2 = *stack1;
		*stack1 = (*stack1)->next;
		(*stack2)->next = tmp;
	}
}
