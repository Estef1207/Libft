/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmeza-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 18:51:23 by esmeza-s          #+#    #+#             */
/*   Updated: 2024/10/04 18:51:26 by esmeza-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*result;

	result = malloc(nmemb * size);
	if (nmemb != '\0' && size != '\0' && (nmemb * size) / nmemb != size)
		return (NULL);
	if (result)
		ft_bzero((void *)result, (nmemb * size));
	return (result);
}
