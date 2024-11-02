/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmeza-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 22:13:14 by esmeza-s          #+#    #+#             */
/*   Updated: 2024/09/30 22:13:18 by esmeza-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;	
	size_t		i;

	i = 0;
	ptr = (char *)s;
	while ((ptr[i]) && (ptr[i] != (char)c))
		i++;
	if (ptr[i] == (char)c)
		return (&ptr[i]);
	else
		return (NULL);
}
