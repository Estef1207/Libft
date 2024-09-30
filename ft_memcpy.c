/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmeza-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 20:26:22 by esmeza-s          #+#    #+#             */
/*   Updated: 2024/09/30 20:26:28 by esmeza-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int	i;
	unsigned char	*d;
	const unsigned char	*s;

	i = 0;
	s = (const unsigned char *)src;
	d = (unsigned char *)dst;
	while (n > 0)
	{
			d[i] = s[i];
			i++;
			n--;	
	}
	return (dst);
}
/*
int	main(void)
{
	char origen[] = "Hello Word, I love Y";
	char destino[20] = "";
 
    ft_memcpy(destino, origen, 9);
    printf("la cadena copiada es %s\n", destino);
    return 0;
}*/
