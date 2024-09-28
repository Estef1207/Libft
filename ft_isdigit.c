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

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
			return (1);
	return (0);	
}

int main()
{
	printf("Test1: %d\n", ft_isdigit('1')); 
	printf("Test2: %d\n", ft_isdigit('d')); 
	printf("Test3: %d\n", ft_isdigit('.')); 
	printf("Test4: %d\n", ft_isdigit('	'));

}
