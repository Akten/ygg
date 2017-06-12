/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcherfi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 23:31:35 by wcherfi           #+#    #+#             */
/*   Updated: 2017/03/30 23:31:39 by wcherfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*t_src;
	char	*t_dst;
	size_t	i;

	i = 0;
	t_dst = (char *)dst;
	t_src = (char *)src;
	if (src < dst)
	{
		while (++i <= len)
			t_dst[len - i] = t_src[len - i];
	}
	else
	{
		while (len-- > 0)
			*t_dst++ = *t_src++;
	}
	return (dst);
}
