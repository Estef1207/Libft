/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmeza-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 18:25:10 by esmeza-s          #+#    #+#             */
/*   Updated: 2025/02/24 19:08:02 by esmeza-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_lits	*tmp;

	count = 0;
	tmp = lst;
	while (tmp)
	{
		count++;
		tmp = tmp->next;
	}
	return (count);
}
/*int main(void)
{
    t_list *head = ft_lstnew("Primer nodo");
    t_list *second = ft_lstnew("Segundo nodo");
    t_list *third = ft_lstnew("Tercer nodo");

    ft_lstadd_front(&head, second);
    ft_lstadd_front(&head, third);

    int size = ft_lstsize(head);
    printf("El tamaño de la lista es: %d\n", size);

    t_list *temp;
    while (head != NULL)
    {
        temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}*/
