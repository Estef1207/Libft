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

void	*ft_memset(void *s, int c, size_t n)
{
	
	unsigned char	*p;

	p = (unsigned char *)s;
	while(n > 0)
	{
		*p = (unsigned char)c;
		p++;
		n--;
	}
	return (s);
}

int	main(void)
{
	char test1[15] = "Hello Word";
    char x = 'f';

    ft_memset(test1, x, 3);
    printf("%s\n", test1);
    return 0;
}
