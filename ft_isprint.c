/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmeza-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 19:45:26 by esmeza-s          #+#    #+#             */
/*   Updated: 2024/10/03 19:45:30 by esmeza-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*
int main()
{
	printf("Test1: %d\n", ft_isprint('@')); 
	printf("Test2: %d\n", ft_isprint('~')); 
	printf("Test3: %d\n", ft_isprint('%')); 
	printf("Test4: %d\n", ft_isprint('	'));
}*/
