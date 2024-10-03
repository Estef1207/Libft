/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmeza-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 20:22:59 by esmeza-s          #+#    #+#             */
/*   Updated: 2024/09/30 20:23:03 by esmeza-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
/*
int	main(void)
{
	char test1[15] = "Hello Word";
 
    ft_bzero(test1, 2);
    printf("el resultado es: %s\n", test1);
    return 0;
}*/
