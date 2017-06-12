/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcherfi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 23:29:44 by wcherfi           #+#    #+#             */
/*   Updated: 2017/03/30 23:29:46 by wcherfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*lst;

	while (*alst)
	{
		lst = *alst;
		*alst = (*alst)->next;
		del((lst)->content, (*lst).content_size);
		free(lst);
		lst = NULL;
	}
}
