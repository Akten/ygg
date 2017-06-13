/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcherfi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 23:30:42 by wcherfi           #+#    #+#             */
/*   Updated: 2017/03/30 23:30:46 by wcherfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t len)
{
	char *t_dst;
	char *t_src;

	t_src = (char*)src;
	t_dst = (char*)dst;
	while (len > 0 && *t_src != c)
	{
		len--;
		*t_dst++ = *t_src++;
	}
	if (len > 0)
	{
		*t_dst++ = *t_src++;
		return ((void*)t_dst);
	}
	else
		return (NULL);
}
