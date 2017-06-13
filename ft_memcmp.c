/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcherfi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 23:31:02 by wcherfi           #+#    #+#             */
/*   Updated: 2017/06/12 21:11:27 by wcherfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*t_s1;
	unsigned char	*t_s2;

	if (!n)
		return (0);
	t_s1 = (void *)s1;
	t_s2 = (void *)s2;
	while (n && (*t_s1 == *t_s2 && n > 0))
	{
		t_s1++;
		t_s2++;
		n--;
	}
	if (!n)
		return (0);
	return (*t_s1 - *t_s2);
}
