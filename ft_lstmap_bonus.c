/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexigar <alexigar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 19:05:19 by alexigar          #+#    #+#             */
/*   Updated: 2023/12/18 13:24:49 by alexigar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*to_return;
	t_list	*object;

	if (!lst || !f || !del)
		return (NULL);
	to_return = NULL;
	while (lst)
	{
		object = ft_lstnew(f(lst -> content));
		if (!object)
		{
			ft_lstclear(&to_return, del);
			return (NULL);
		}
		ft_lstadd_back(&to_return, object);
		lst = lst -> next;
	}
	return (to_return);
}
/*
void *transform(void *content)
{
	if (!content)
		return (NULL);
	char *str = (char *)content;
	char *to_return = ft_strdup(str);
	int i = 0;
	while (to_return[i])
	{
		to_return[i] = ft_toupper(to_return[i]);
		i++;
	}
	return (to_return);
}

void free_content(void *content)
{
	free(content);
}

int main(void)
{
	t_list *prueba = ft_lstnew("Hola que tal");
	ft_lstadd_back(&prueba, ft_lstnew("Soy una pruebita"));
	t_list *pruebita = ft_lstmap(prueba, transform, free_content);
	printf("%s\n", pruebita -> content);
	printf("%s", (pruebita -> next) -> content);
}*/
