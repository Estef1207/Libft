/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmeza-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 21:11:01 by esmeza-s          #+#    #+#             */
/*   Updated: 2024/10/01 21:11:11 by esmeza-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*ptr;
	size_t		s_len;

	ptr = (const char *)s;
	s_len = ft_strlen(s);
	s_len--;
	while ((ptr[s_len]) && (ptr[s_len] != (char)c))
		s_len--;
	if (ptr[s_len] == (char)c)
		return ((char *)&ptr[s_len]);
	else
		return (NULL);
}
/*
int main()
{
	const char str[18] = "Vamonos a dormir";
	int c = 'f';
	char *resultado = ft_strrchr(str, c);
	if (resultado)
		printf("ultim char: %c es en el byte: %ld", *resultado, resultado - str);
	else
		printf("No hubo coincidencia alguna"); 
}*/
