/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcherfi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 23:38:54 by wcherfi           #+#    #+#             */
/*   Updated: 2017/03/30 23:38:59 by wcherfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int		i;

	i = 0;
	if (!little[i])
		return ((char *)big);
	while (big[i])
	{
		if (ft_memcmp(big + i, little, ft_strlen(little)) == 0)
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}
