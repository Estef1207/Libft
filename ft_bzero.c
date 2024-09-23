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

void	bzero(void *s, size_t len)
{
	
	unsigned char	*p;

	p = (unsigned char *)s;
	while(len > 0)
	{
		*p = 0;
		p++;
		len--;
	}
}

int	main(void)
{
	char test1[15] = "Hello Word";
 
    bzero(test1, 1);
    printf("%s\n", test1);
    return 0;
}
