/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmeza-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 20:58:12 by esmeza-s          #+#    #+#             */
/*   Updated: 2024/10/03 20:58:14 by esmeza-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	resultado;
	int signo;
	int i;

	i = 0;
	resultado = 0;
	signo = '+';
	while (str[i]) 
	{
		if (str[i] == 43 || str[i] == 45)
		{
			signo = str[i];
			i++;
		}
		else if(ft_isdigit(str[i]) > 0)
		{
			resultado = ((resultado * 10) + (str[i] - '0'));
			i++;
		}
		else
			i++;
	}
	return (resultado * signo);
}
int main()
{
	char str[] = "	2566";
	int result = ft_atoi(str);
	printf("encontre %c", result);
}
