/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmeza-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 18:48:32 by esmeza-s          #+#    #+#             */
/*   Updated: 2024/10/07 18:48:35 by esmeza-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	new_str = (char *)malloc(strlen(s1) + strlen(s2) + 1);
	if (!new_str)
		return (NULL);
	if (new_str)
	{
		while (s1[i])
		{
			new_str[i] = s1[i];
			i++;
		}
		while (s2[j])
		{
			new_str[i] = s2[j];
			i++;
			j++;
		}
	}
	new_str[i] = '\0';
	return (new_str);
}

int	main()
{
  char s1[] = "una copia bella";
  char s2[] = " gracias a ti";
  char *new_str = ft_strjoin(s1, s2);
  printf("%s\n", new_str);
  return 0;
}*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	size_t	tlen;

	tlen = (ft_strlen(s1) + ft_strlen(s2));
	new_str = (char *)malloc(tlen + 1);
	if (!new_str)
		return (NULL);
	if (!s1 || !s2)
		return (NULL);
	if (new_str)
	{
		ft_strlcpy(new_str, s1, tlen + 1);
		ft_strlcat(new_str, s2, tlen + 1);
	}
	new_str[tlen] = '\0';
	return (new_str);
}
/*
int	main()
{
  char s1[] = "una copia bella";
  char s2[] = " gracias a ti";
  char *new_str = ft_strjoin(s1, s2);
  printf("%s\n", new_str);
  return 0;
}*/
