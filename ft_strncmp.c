/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmeza-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 21:46:03 by esmeza-s          #+#    #+#             */
/*   Updated: 2024/10/01 21:46:07 by esmeza-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((i <= n) && (s1[i]) && (s2[i]) && (s1[i] == s2[i]))
		i++;
	if (i == n)
		return (0);
	else
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
int	main()
{
	const char str1[] = "holas my friendd";
	const char str2[] = "holiiii";
	size_t result = ft_strncmp(str1, str2, 8);
	printf("el resultado de mi comparacion es: %ld", result);
}
*/