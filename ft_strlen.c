/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmeza-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 20:25:23 by esmeza-s          #+#    #+#             */
/*   Updated: 2024/09/30 20:25:27 by esmeza-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while(s[i])
	{
		i++;
	}
	return (i);	
}
/*
int main()
{
	char *test1 = "Hello World";
	char *test2 = "queT@l? como estas?";
	printf("La cantidad de letras es: %d\n", ft_strlen(test1));
	printf("La cantidad de letras es: %d\n", ft_strlen(test2));
	return 0;
}*/ 
