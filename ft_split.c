/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexigar <alexigar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:50:51 by alexigar          #+#    #+#             */
/*   Updated: 2023/12/18 12:42:40 by alexigar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
#include <string.h>

static char	*get_word(char const *s, char c)
{
	int		i;
	int		j;
	char	*to_return;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	to_return = malloc(i + 1);
	if (!to_return)
		return (NULL);
	j = 0;
	while (j < i)
	{
		to_return[j] = s[j];
		j++;
	}
	to_return[j] = '\0';
	return (to_return);
}

static int	get_words(char const *s, char c)
{
	int		to_return;
	int		i;

	i = 1;
	if (!s || ft_strlen(s) == 0)
		return (0);
	if (s[0] == c)
		to_return = 0;
	else
		to_return = 1;
	while (s[i] != '\0')
	{
		if (s[i] != c && s[i - 1] == c)
			to_return++;
		i++;
	}
	return (to_return);
}

static void	free_all(char **array, int index)
{
	int	i;

	i = 0;
	while (i < index)
	{
		free(array[i]);
		i++;
	}
	free(array);
}

void	fill(char **array, char *word, int index)
{
	if (!word)
	{
		free_all(array, index);
		return ;
	}
	array[index] = malloc(ft_strlen(word) + 1);
	if (!array[index])
	{
		free_all(array, index);
		return ;
	}
	ft_strlcpy(array[index], word, ft_strlen(word) + 1);
}

char	**ft_split(char const *s, char c)
{
	char	**to_return;
	int		words;
	int		i;
	char	*word;

	words = get_words(s, c);
	to_return = malloc(sizeof(char *) * (words + 1));
	if (!to_return)
		return (NULL);
	i = 0;
	while (*s == c)
		s++;
	while (i < words && to_return)
	{
		word = get_word(s, c);
		fill(to_return, word, i);
		free(word);
		s += ft_strlen(to_return[i]);
		while (*s == c && *s != '\0')
			s++;
		i++;
	}
	to_return[i] = NULL;
	return (to_return);
}
/*
int main(void)
{
	char *str = "hello world !";
	int prueba2 = get_words(str, ' ');
	char **prueba = ft_split(str, ' ');
	int i = 0;
	printf("%d\n", prueba2);
	while (prueba[i])
	{
		printf("%s$\n", prueba[i]);
		i++;
	}
	if (!prueba[i])
		printf("NULL");
}*/
