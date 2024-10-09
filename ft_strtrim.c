/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmeza-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 18:52:36 by esmeza-s          #+#    #+#             */
/*   Updated: 2024/10/07 18:52:43 by esmeza-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	char	*new_str;
	int		sizes;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	sizes = ft_strlen(s1);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (sizes > i && ft_strchr(set, s1[sizes - 1]))
		sizes--;
	new_str = (char *)malloc(sizes - i + 1);
	if (!new_str)
		return (NULL);
	ft_strlcpy(new_str, &s1[i], sizes - i + 1);
	return (new_str);
}
/*
int main()
{
	char s1[] = "asfffholidasd";
	char s2[] = "fsadf";
	char *new_str = ft_strtrim(s1, s2);
	printf("%s\n", new_str);
	free (new_str);
	return 0;
}*/
