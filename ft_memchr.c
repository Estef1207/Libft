/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmeza-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 19:45:07 by esmeza-s          #+#    #+#             */
/*   Updated: 2024/10/02 19:45:10 by esmeza-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;

	str = (const unsigned char *)s;
	while (n > 0)
	{
		if (*str == (unsigned char)c)
		{
			return ((void *)str);
		}
		str++;
		n--;
	}
	return (NULL);
}
/*
int main()
{
	char string[] = "estamos buscando algo";
	char letter = 'o';
	char *resultado = (char *)ft_memchr(string, letter, 5);
	printf("coindicencia: %c, en posicion %ld", *resultado, resultado - string);
}*/
