/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteofilo <eteofilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 17:42:50 by eteofilo          #+#    #+#             */
/*   Updated: 2024/11/29 06:09:36 by eteofilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP
# define PUSH_SWAP

# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	int			nb;
	struct s_list	*next;
}	t_list;

t_list	*ft_lstnew(int nb);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list **lst);

t_list *check_pos(t_list *stack1, t_list *stack2);
void pp(t_list **stack1, t_list **stack2);

#endif
