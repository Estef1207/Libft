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

#include <string.h>
#include <stdio.h>
#include <unistd.h>

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
/*
void	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	l;

	i = ft_strle(src);
	l = ft_strle(dst);
	if ((dst[l]) && i < size - 1)
	{	
		while (dst[l] < size - 1)
		{
			l++;
			dst[l] = src[i];
			i++;
		}
		
	return (i);
}
*/
int	main()
{
	char origen[] = " mundo";
	char destino[] = "hola";
	printf("la cadena origen contiene %d caracteres\n", ft_strlen(origen));
	printf("la cadena destino %d caracteres\n", ft_strlen(destino));
	//ft_strlcat(destino, origen, 20);
	//printf("la cadena concatenada es: %s\n", destino);
	//printf("la cadena contiene %d\n caracteres", ft_strlcat(destino, origen, 10));
	return (0);
}
