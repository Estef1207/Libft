/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmeza-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 18:07:08 by esmeza-s          #+#    #+#             */
/*   Updated: 2024/10/15 18:07:13 by esmeza-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_numlen(int num)
{
	int	len;

	len = 0;
	if (num <= 0)
		len = 1;
	if (num == 0)
		len = 1;
	while (num != 0)
	{
		num = num / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int			len;
	char		*str_num;
	const char	*i_digits;
	long		nbr;

	nbr = n;
	i_digits = "0123456789";
	len = ft_numlen(nbr);
	if (!(str_num = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	str_num[len] = '\0';
	if (nbr == 0)
		str_num[0] = '0';
	if (nbr < 0)
	{
		str_num[0] = '-';
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		str_num[--len] = i_digits[nbr % 10];
		nbr = nbr / 10;
	}
	return (str_num);
}
/*
int main()
{
	 int n = -528;
	char *numeros = ft_itoa(n);
	if (numeros)
	{
		printf("El número en char es: %s\n", numeros);
		free(numeros);
	}
	else
		printf("Error al convertir el número.\n");
	return 0;
}*/
