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

int	ft_isprint(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);	
}

int main()
{

	char *test1 = "Hello	Word";
	char *test2 = "queT@l?";
	char *test3 = "3400€ mensuales";
	char *test4 = "TodoOkBabby";

	printf("Test1: %d\n", ft_isprint(test1)); 
	printf("Test2: %d\n", ft_isprint(test2)); 
	printf("Test3: %d\n", ft_isprint(test3)); 
	printf("Test4: %d\n", ft_isprint(test4));

	return 0;
}
