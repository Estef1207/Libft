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

static int	count_w(char **str, char c)
{
	int	i;
	int	cw;

	i = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i] == '\0')
			cw++;
		i++;
	}
	return (cw);
}



char	*get_next_word(char const **s, char c)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)*s;
	while (str[i] && str[i] != c)
	{
		i++;
	}
	*s += i;
	str = ft_substr(str, 0, i);
	return (str);
}




static int	count_l(char **str, char c)
{
	int	i;
	int new_w

	
	i = 0;
	while (s[i])
		if (s[i] != c)
			i++
		else if 

}




int	main()
{
	const char **s = "una frase linda";
	char delim = ' ';




}
