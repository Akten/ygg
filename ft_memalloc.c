/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcherfi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 23:30:34 by wcherfi           #+#    #+#             */
/*   Updated: 2017/03/30 23:30:38 by wcherfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*str;
	int		i;

	i = 0;
	if (!(str = (void*)malloc(sizeof(void) * size)) || !size)
		return (NULL);
	ft_bzero(str, size);
	return (str);
}
