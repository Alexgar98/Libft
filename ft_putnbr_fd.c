/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexigar <alexigar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:27:50 by alexigar          #+#    #+#             */
/*   Updated: 2023/12/07 14:16:05 by alexigar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int	to_positive(int nb, int fd)
{
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb = -nb;
	}
	return (nb);
}

void	ft_putnbr_fd(int n, int fd)
{
	char	to_print;
	int		last;

	last = 0;
	if (n == -2147483648)
	{
		n++;
		last = 1;
	}
	n = to_positive(n, fd);
	if (n >= 0 && n <= 9)
	{
		to_print = n + '0';
		write(fd, &to_print, 1);
	}
	else
	{
		to_print = (n % 10 + last) + 48;
		ft_putnbr_fd((n / 10), fd);
		write(fd, &to_print, 1);
	}
}
/*
int main(void)
{
	ft_putnbr_fd(-42, 2);
}*/
