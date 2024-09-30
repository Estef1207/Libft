/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmeza-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 20:25:59 by esmeza-s          #+#    #+#             */
/*   Updated: 2024/09/30 20:26:03 by esmeza-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	const unsigned char	*s;
	size_t i;	

	i = 0;
	s = (const unsigned char *)src;
	d = (unsigned char *)dest;
	if (d < s)	
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else if (d > s)
	{
		while (n > 0)
		{
			n--;			
			d[n] = s[n];
		}
	}
	return (dest);
}
/*
int	main(void)
{
	char origen[] = "Hello Word, I love Y";
	char destino[25] = " ";
 
    ft_memmove(destino, origen, 9);
    printf("la cadena copiada es %s\n", destino);
    return 0;
}*/
