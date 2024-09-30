/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmeza-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 18:00:47 by esmeza-s          #+#    #+#             */
/*   Updated: 2024/09/30 18:00:49 by esmeza-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (ft_isascii(c) >= 1)
	{
		if ((c >= 97) && (c <= 122))
			c = (c - 32);
	}
	return (c);
}
/*
int	main()
{
	int c = 'b';
	printf("mi letra inicial es: %c\n", c);	
	printf("y ahora mi letra es: %c\n",ft_toupper(c));	
	return 0;
}*/

