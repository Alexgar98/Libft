/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexigar <alexigar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 19:20:27 by alexigar          #+#    #+#             */
/*   Updated: 2023/12/07 14:03:49 by alexigar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	cont;
	int	negative;

	cont = 0;
	negative = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			negative = -negative;
		if (ft_isdigit(*(str + 1)) == 1)
			str++;
		else
			return (0);
	}
	while (ft_isdigit(*str) == 1)
	{
		cont = cont * 10 + (*str - '0');
		str++;
	}
	return (cont * negative);
}
/*
int main(void)
{
	printf("%d", ft_atoi("\n\n\n    -46\b9 \n5d6"));
}*/
