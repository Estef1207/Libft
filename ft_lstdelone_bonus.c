/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmeza-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 19:16:06 by esmeza-s          #+#    #+#             */
/*   Updated: 2025/02/25 19:27:51 by esmeza-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!del || !lst)
		return ;
	del(lst->content);
	free(lst);
	return ;
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definición de t_list (asumiendo que es así)
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;

// Función auxiliar para crear un nuevo nodo
t_list *ft_lstnew(void *content)
{
    t_list *new;

    new = (t_list *)malloc(sizeof(t_list));
    if (!new)
        return (NULL);
    new->content = content;
    new->next = NULL;
    return (new);
}

// Función para liberar el contenido (en este caso, strings)
void del_content(void *content)
{
    printf("Liberando contenido: %s\n", (char *)content);
    free(content);
}

// Función para imprimir la lista
void print_list(t_list *lst)
{
    while (lst)
    {
        printf("%s -> ", (char *)lst->content);
        lst = lst->next;
    }
    printf("NULL\n");
}

int main(void)
{
    // Crear algunos nodos con contenido dinámico
    char *str1 = strdup("Nodo 1");
    char *str2 = strdup("Nodo 2");
    char *str3 = strdup("Nodo 3");

    t_list *nodo1 = ft_lstnew(str1);
    t_list *nodo2 = ft_lstnew(str2);
    t_list *nodo3 = ft_lstnew(str3);

    // Conectar los nodos
    nodo1->next = nodo2;
    nodo2->next = nodo3;

    printf("Lista original:\n");
    print_list(nodo1);

    // Eliminar el nodo 2 (del medio)
    printf("\nEliminando nodo 2:\n");
    t_list *temp = nodo1->next;  // Guardar referencia a nodo2
    nodo1->next = nodo3;  // Conectar nodo1 directamente con nodo3
    ft_lstdelone(temp, del_content);

    printf("\nLista después de eliminar nodo 2:\n");
    print_list(nodo1);

    // Limpiar el resto de la lista manualmente
    printf("\nLimpieza final:\n");
    ft_lstdelone(nodo3, del_content);
    ft_lstdelone(nodo1, del_content);

    return 0;
}*/
