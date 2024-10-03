/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmeza-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 19:25:25 by esmeza-s          #+#    #+#             */
/*   Updated: 2024/09/25 19:25:29 by esmeza-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	while ((src[i]) && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}
/*
int main()
{
    char origen[] = "hola como estas ?";
    char destino[20] = "aqui to bien";
 
	ft_strlcpy(destino, origen, 8);
  	printf("Cadena copiada: %s\n", destino);
	printf("Long cadena src: %zu\n", ft_strlcpy(destino, origen, 9));
    return 0;
}*/
