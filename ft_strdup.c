/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmeza-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 13:09:02 by esmeza-s          #+#    #+#             */
/*   Updated: 2024/10/05 13:09:04 by esmeza-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*newstr;
	size_t	i;

	i = 0;
	newstr = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!newstr)
		return (NULL);
	while (s[i])
	{
		newstr[i] = s[i];
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
/*
int main()
{
	char original[] = "paRAngaRIcutIRIMIcuaro";
	char *dupl = ft_strdup(original);
	if (dupl)
	{
		printf("La cadena duplicada es: %s\n", dupl);
		free(dupl);
	}
	else
		printf("Error al duplicar la cadena\n");
}*/
