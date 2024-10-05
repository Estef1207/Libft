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
	if (c == '\0')
		return ((char *)ptr + s_len);
	while (s_len > 0)
	{
		if (ptr[s_len] == (char)c)
			return ((char *)ptr + s_len);
		s_len--;
	}
	if (ptr[0] == (char)c)
		return ((char *)ptr);
	return (NULL);
}
/*
int main()
{
	const char str[18] = "Vamonos a dormir";
	int c = '\0';
	char *res = ft_strrchr(str, c);
	if (resultado)
		printf("hay un char: %c en el byte: %ld\n", *res, resultado - str);
	else
		printf("No hubo coincidencia alguna\n"); 
}*/
