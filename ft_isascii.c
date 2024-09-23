/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmeza-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 17:51:49 by esmeza-s          #+#    #+#             */
/*   Updated: 2024/09/23 17:51:53 by esmeza-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isascii(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		if (!(str[i] >= 0 && str[i] <= 127))
			return (0);
		i++;
	}
	return (1);	
}

int main()
{

	char *test1 = "Hello	Word";
	char *test2 = "856He/llo458";
	char *test3 = "3400€ mensuales";
	char *test4 = "Si que funciona CoÑo";

	printf("Test1: %d\n", ft_isascii(test1)); 
	printf("Test2: %d\n", ft_isascii(test2)); 
	printf("Test3: %d\n", ft_isascii(test3)); 
	printf("Test4: %d\n", ft_isascii(test4));

	return 0;
}
