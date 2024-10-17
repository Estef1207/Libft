/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmeza-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 18:15:54 by esmeza-s          #+#    #+#             */
/*   Updated: 2024/10/10 18:15:57 by esmeza-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char *s, char c)
{
	int	i;
	int	cw;

	i = 0;
	cw = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			cw++;
		i++;
	}
	return (cw);
}

static char	*get_next_word(char const **s, char c)
{
	int		i;
	char	*str;
	char	*substr;

	i = 0;
	str = (char *)*s;
	while (str[i] && str[i] != c)
	{
		i++;
	}
	substr = ft_substr(str, 0, i);
	if (!substr)
		return (NULL);
	*s += i;
	return (substr);
}

void	free_array(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

static char	**i_words(char **array_w, char const *s, char c)
{
	int	i;

	i = 0;
	while (*s != '\0')
	{
		if (*s != c)
		{
			array_w[i] = get_next_word(&s, c);
			if (!array_w[i++])
			{
				free_array(array_w);
				return (NULL);
			}
		}
		else
			s++;
	}
	array_w[i] = NULL;
	return (array_w);
}

char	**ft_split(char const *s, char c)
{
	int		words;
	char	**array_w;

	if (!s)
		return (NULL);
	words = count_words((char *)s, c);
	array_w = ((char **)malloc(sizeof(char *) * (words + 1)));
	if (!array_w)
		return (NULL);
	return (i_words(array_w, s, c));
}
/*
int	main()
{
	const char *s = "una frase linda";
	char delim = ' ';
	char **result = ft_split(s, delim);

	int	i = 0;
	if (!result)
		return (1);
	printf("mi array es:\n");
	while (result[i] != NULL)
	{
		printf("%s\n", result[i]);
		i++;
	}
	free_array(result);
	free (result);
}*/
