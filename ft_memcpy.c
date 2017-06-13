/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcherfi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 23:31:11 by wcherfi           #+#    #+#             */
/*   Updated: 2017/03/30 23:31:16 by wcherfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, void const *src, size_t len)
{
	unsigned char	*tmp;

	if (dst && src)
		tmp = (unsigned char*)dst;
	while (len--)
		*tmp++ = *(unsigned char*)src++;
	return (dst);
}
