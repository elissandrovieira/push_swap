/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteofilo <eteofilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 17:37:23 by eteofilo          #+#    #+#             */
/*   Updated: 2024/11/29 06:09:36 by eteofilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int main ()
{
	int i = 0;
	int arr[] = {5, 2, 7, 1, 6, 3, 9, 4, 8};
	t_list *stackA;
	t_list *stackB;
	t_list *node;

	stackB = NULL;
	while (i < 9)
	{
		if (i == 0)
			stackA = ft_lstnew(arr[i]);
		else
			ft_lstadd_back(&stackA, ft_lstnew(arr[i]));

		i++;
	}

	i = 0;
	while (i <= 9)
	{
		if (i == 0 || i == 1)
			pp(&stackA, &stackB);
		else
		{
			node = check_pos(stackA, &stackB);
			add_to_lst(node, &stackB);
		}
		i++;
	}
	printf("stackA\n");
	while(stackA != NULL)
	{
		printf("%i, ", stackA->nb);
		stackA = stackA->next;
	}
	printf("\nstackB\n");
		while(stackB != NULL)
	{
		printf("%i, ", stackB->nb);
		stackB = stackB->next;
	}
	printf("\n");
	return (0);
}
