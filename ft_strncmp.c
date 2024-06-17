/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexigar <alexigar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 19:32:47 by alexigar          #+#    #+#             */
/*   Updated: 2023/12/07 10:28:08 by alexigar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != '\0' && s2[i] != '\0')
		{
			if (s1[i] == s2[i])
				i++;
			else
				return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		else
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
	return (0);
}
/*
int main(void)
{
	char *s1 = "a";
	char *s2 = "asd";
	int n = 10;
	printf("%d\n", strncmp(s1, s2, n));
	printf("%d", ft_strncmp(s1, s2, n));
}*/
