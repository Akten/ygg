/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcherfi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 23:38:19 by wcherfi           #+#    #+#             */
/*   Updated: 2017/03/30 23:38:24 by wcherfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int		i;
	size_t	j;

	i = 0;
	if (!little[i])
		return ((char *)big);
	j = ft_strlen(little);
	while (big[i] && len >= j)
	{
		if (ft_strncmp(big + i, little, j) == 0)
			return ((char *)big + i);
		i++;
		len--;
	}
	return (NULL);
}
