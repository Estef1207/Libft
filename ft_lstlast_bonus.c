/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonnus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmeza-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 17:59:46 by esmeza-s          #+#    #+#             */
/*   Updated: 2025/02/25 19:15:09 by esmeza-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*temp;

	if (!lst)
		return (NULL);
	temp = lst;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	return (temp);
}

/*
int main(void)
{
    t_list *head = ft_lstnew("Primer nodo");
    ft_lstadd_front(&head, ft_lstnew("Segundo nodo"));
    ft_lstadd_front(&head, ft_lstnew("Tercer nodo"));

    t_list *last_node = ft_lstlast(head);

    if (last_node) {
        printf("El último nodo contiene: %s\n", (char *)last_node->content);
    } else {
        printf("La lista está vacía.\n");
    }

    t_list *temp;
    while (head != NULL)
    {
        temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}*/
