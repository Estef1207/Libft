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

int	ft_isalpha(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')))
			return (0);
		i++;
	}
	return (1);	
}

int main()
{

	char *test1 = "HelloWord";
	char *test2 = "Hello458";
	char *test3 = "AMIGUITOS";
	char *test4 = "1234";

	printf("Test1: %d\n", ft_isalpha(test1)); 
	printf("Test2: %d\n", ft_isalpha(test2)); 
	printf("Test3: %d\n", ft_isalpha(test3)); 
	printf("Test4: %d\n", ft_isalpha(test4));

	return 0;
}
