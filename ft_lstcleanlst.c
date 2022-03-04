/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcleanlst.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 14:33:14 by guhernan          #+#    #+#             */
/*   Updated: 2021/08/16 14:33:17 by guhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstcleanlst(t_list **lst, void (*del)(void *))
{
	t_list		*tmp;

	tmp = NULL;
	if (lst == NULL || *lst == NULL)
		return ;
	tmp = *lst;
	while (tmp)
	{
		tmp = (*lst)->next;
		del(*lst);
		*lst = tmp;
	}
	return ;
}
