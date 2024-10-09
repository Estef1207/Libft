/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmeza-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 22:13:14 by esmeza-s          #+#    #+#             */
/*   Updated: 2024/09/30 22:13:18 by esmeza-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char	*ptr;	
	size_t		i;

	i = 0;
	ptr = (const char *)s;
	while ((ptr[i]) && (ptr[i] != (char)c))
		i++;
	if (ptr[i] == (char)c)
		return ((char *)&ptr[i]);
	else
		return (NULL);
}
/*
int main()
{
	const char *s = "la prueba";
	int c = 'e';
	char *find_char = strchr(s, c);
	if (find_char)
		printf("Una coincidencia: %c en el %ld byte", *find_char, find_char - s);
	else
		printf("No hubo coincidencia alguna");
}*/
