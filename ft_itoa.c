/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexigar <alexigar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 11:33:30 by alexigar          #+#    #+#             */
/*   Updated: 2023/12/07 11:22:07 by alexigar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static int	make_string_space(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n == -2147483648)
		n++;
	if (n < 0)
	{
		i++;
		n = -n;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*to_return;
	int		i;
	long	nbr;

	i = make_string_space(n);
	nbr = n;
	to_return = malloc(i + 1);
	if (to_return == NULL)
		return (NULL);
	to_return[i] = '\0';
	i--;
	if (nbr < 0)
	{
		to_return[0] = '-';
		nbr = -nbr;
	}
	if (nbr == 0)
		to_return[0] = '0';
	while (nbr != 0)
	{
		to_return[i] = (nbr % 10) + '0';
		i--;
		nbr = nbr / 10;
	}
	return (to_return);
}
/*
int main(void)
{
	printf("%s", ft_itoa(4234987));
	return 0;
}*/
