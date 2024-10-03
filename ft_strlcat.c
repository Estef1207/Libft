/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmeza-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 10:32:28 by esmeza-s          #+#    #+#             */
/*   Updated: 2024/09/28 10:32:30 by esmeza-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(dst);
	j = 0;
	if (src[j])
	{
		while ((i + j + 1) < size)
		{
			dst[i + j] = src[j];
			j++;
		}
		dst[i + j] = '\0';
	}
	return (i + ft_strlen(src));
}
/*
int	main()
{
	char origen[20] = " mundo";
	char destino[20] = "hola";
	size_t resultado;

	resultado = ft_strlcat(destino, origen, sizeof(destino));

	printf("Eesult de mi función es: %zu\n", resultado);
	printf("La cadena concatenada es: %s\n", destino);
	return (0);
}*/
