/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmeza-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 20:23:12 by esmeza-s          #+#    #+#             */
/*   Updated: 2024/09/30 20:23:15 by esmeza-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9')
		|| (c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
/*
int main()
{
	printf("Test1: %d\n", ft_isalnum('p')); 
	printf("Test2: %d\n", ft_isalnum('2')); 
	printf("Test3: %d\n", ft_isalnum('1')); 
	printf("Test4: %d\n", ft_isalnum('.'));
}*/
