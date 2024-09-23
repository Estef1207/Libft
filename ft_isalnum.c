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

int	ft_isdigit(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		if (!((str[i] >= '0' && str[i] <= '9') 
			|| (str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')))
			return (0);
		i++;
	}
	return (1);	
}

int main()
{

	char *test1 = "HelloWord";
	char *test2 = "856He/llo458";
	char *test3 = "1245.78";
	char *test4 = "1234";

	printf("Test1: %d\n", ft_isdigit(test1)); 
	printf("Test2: %d\n", ft_isdigit(test2)); 
	printf("Test3: %d\n", ft_isdigit(test3)); 
	printf("Test4: %d\n", ft_isdigit(test4));

	return 0;
}
