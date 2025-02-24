/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmeza-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 18:06:07 by esmeza-s          #+#    #+#             */
/*   Updated: 2025/02/24 18:15:36 by esmeza-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#inlcude "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_nodo;

	new_nodo = (ft_lstnew)malloc(sizeof(t_list ft_lstnew));
	if (!new_nodo)
		return (NULL);

	new_nodo->content = content;
	new_nodo->next = NULL;
	return (new_nodo);

}
