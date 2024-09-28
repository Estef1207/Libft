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
#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	
	unsigned char	*p;

	p = (unsigned char *)s;
	while(n > 0)
	{
		*p = 0;
		p++;
		n--;
	}
}

int	main(void)
{
	char test1[15] = "Hello Word";
 
    ft_bzero(test1, 2);
    printf("el resultado es: %s\n", test1);
    return 0;
}
