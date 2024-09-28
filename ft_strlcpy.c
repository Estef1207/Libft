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

#include <string.h>
#include <stdio.h>

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while(s[i] != '\0')
	{
		i++;
	}
	return (i);	
}

int	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;
	
	i = 0;
	src_len = ft_strlen(src);
			

	while ((src[i]) && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
	dst[i] = '\0';
	return (src_len);
}
/*
int main(void)
{
    char origen[] = "hola como estas?";
    char destino[20] = "aqui to bien";  // Asegúrate de que el destino sea lo suficientemente grande
    size_t NuevaStr = ft_strlcpy(destino, origen, 5);  // Se copiarán hasta 4 caracteres + '\0'

    printf("Cadena copiada: %s\n", destino);    // Salida: hola
    printf("Longitud de la cadena fuente: %zu\n", NuevaStr); // Salida: longitud de "hola como estas?"

    return 0;
}*/

int	main(void)
{
	char origen[20] = "hola como estas?";
	char destino[20] = "aqui to bien";
	ft_strlcpy(destino, origen, 7);
	printf("Cadena copiada: %s\n", destino);
	return (0);
}









