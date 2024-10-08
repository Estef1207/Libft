/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmeza-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 20:23:37 by esmeza-s          #+#    #+#             */
/*   Updated: 2024/09/30 20:23:40 by esmeza-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
int main()
{
	printf("Test1: %d\n", ft_isascii('?')); 
	printf("Test2: %d\n", ft_isascii('s')); 
	printf("Test3: %d\n", ft_isascii('Í')); 
	printf("Test4: %d\n", ft_isascii('.'));
}*/
