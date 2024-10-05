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
	size_t	slen;
	size_t	dlen;
	size_t	i;

	slen = ft_strlen(src);
	dlen = ft_strlen(dst);
	i = 0;
	if (size < dlen)
	{
		return (size + slen);
	}
	while ((src[i]) && (dlen + i) < (size -1))
	{
		dst[dlen + i] = src[i];
		i++;
	}
	dst[dlen + i] = '\0';
	return (dlen + slen);
}
/*
int	main()
{
	char origen[20] = " mundo";
	char destino[20] = "hola";
	size_t resultado;

	resultado = ft_strlcat(destino, origen, sizeof(destino));

	printf("Result de mi función es: %zu\n", resultado);
	printf("La cadena concatenada es: %s\n", destino);
	return (0);
}*/
