/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexigar <alexigar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 13:51:41 by alexigar          #+#    #+#             */
/*   Updated: 2023/12/18 11:36:19 by alexigar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst -> content);
	free(lst);
}
/*
void	content_delete(void *content)
{
	free(content);
}

int main(void)
{
	t_list *prueba = ft_lstnew("Si ves este mensaje hay algo mal");
	ft_lstdelone(prueba, content_delete);
	printf("%s", prueba -> content);
}*/
