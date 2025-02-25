/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmeza-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 18:04:23 by esmeza-s          #+#    #+#             */
/*   Updated: 2025/02/25 18:05:20 by esmeza-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	temp = *lst;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
	return ;
}

/*int main(void)
{
    t_list *head = NULL;
    t_list *new_node1 = ft_lstnew("Primer nodo");
    t_list *new_node2 = ft_lstnew("Segundo nodo");
    t_list *new_node3 = ft_lstnew("Tercer nodo");

    ft_lstadd_back(&head, new_node1);
    ft_lstadd_back(&head, new_node2);
    ft_lstadd_back(&head, new_node3);

    t_list *temp = head;
    while (temp != NULL)
    {
        printf("%s\n", (char *)temp->content);
        temp = temp->next;
    }

    t_list *tempo;
    while (head != NULL)
    {
        tempo = head;
        head = head->next;
        free(tempo);
    }

    return 0;
}*/
