/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmeza-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 21:28:05 by esmeza-s          #+#    #+#             */
/*   Updated: 2024/10/02 21:28:07 by esmeza-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*str1;
	const unsigned char	*str2;

	i = 0;
	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	if (n == 0)
		return (0);
	while (i < n && str1[i] == str2[i])
		i++;
	return ((int)(str1[i] - str2[i]));
}
/*
int main()
{
	char s1[] = "hambre";
	char s2[] = "hombre";
	int result = ft_memcmp(s1, s2, 5);
	if (result > 0)
		printf("The string s2 has %d bytes more than s1", result);
	if (result == 0)
		printf("My string s1 is the same as s2");
	else
		printf("The string s1 has %d bytes less than s2", result);
}*/
