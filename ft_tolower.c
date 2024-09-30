/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmeza-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 21:53:22 by esmeza-s          #+#    #+#             */
/*   Updated: 2024/09/30 21:53:35 by esmeza-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (ft_isascii(c) >= 1)
	{
		if((c >= 'A') && (c <= 'Z'))
			c = (c + 32);
	}
	return (c);
}
/*
int	main()
{
	int c = 'A';
	printf("Tengo esta letra: %c\n", c);
	printf("Y ahora esta en Minuscula: %c\n", ft_tolower(c));
	return (0);
}*/
