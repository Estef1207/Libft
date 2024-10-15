/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmeza-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 20:17:18 by esmeza-s          #+#    #+#             */
/*   Updated: 2024/10/15 20:17:20 by esmeza-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char		*result;
	size_t		i;
	size_t		str_len;

	i = 0;
	if (!s || !f)
		return (NULL);
	str_len = ft_strlen(s);
	if (str_len == 0)
		return (ft_calloc(1, sizeof(char)));
	result = ft_calloc(str_len + 1, sizeof(char));
	if (!result)
		return (NULL);
	while (i < str_len)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
/*
char	example_funct(unsigned int i, char c)
{
	i += i;
	if (c >= 'a' && c <= 'z')
		return (c - 'a' + 'A');
	return (c);
}

int	main()
{
	char	str[] = "Hola, Que tal 42";
	char	*result;

	result = ft_strmapi(str, example_funct);
	if (result)
	{
		printf("Original: %s\n", str);
		printf("Modificadad por ft_str_mapi: %s\n", result);
		free(result);
	}
	return (0);
}*/
