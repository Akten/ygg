/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcherfi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 23:30:17 by wcherfi           #+#    #+#             */
/*   Updated: 2017/03/30 23:30:18 by wcherfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*tmp;
	t_list		*new;

	if (!lst || !f)
		return (NULL);
	new = (*f)(lst);
	tmp = new;
	while (lst->next)
	{
		lst = lst->next;
		tmp->next = (*f)(lst);
		tmp = tmp->next;
	}
	return (new);
}
