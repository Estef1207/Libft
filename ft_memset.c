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

void	*memset(void *ptr, int value, size_t num)
{
	
	unsigned char	*p;

	p = (unsigned char *)ptr;
	while(num > 0)
	{
		*p = (unsigned char)value;
		p++;
		num--;
	}
	return (ptr);
}

int	main(void)
{
	char test1[15] = "Hello Word";
    char x = 'f';

    memset(test1, x, 3);
    printf("%s\n", test1);
    return 0;
}
