/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcherfi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 23:39:16 by wcherfi           #+#    #+#             */
/*   Updated: 2017/03/30 23:39:19 by wcherfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*cpy;

	if (!s)
		return (NULL);
	i = ft_strlen(s);
	if (!(cpy = (char*)malloc(sizeof(char) * len + 1)) || !s || start > i)
		return (NULL);
	i = 0;
	while (s[start] && i < len)
		cpy[i++] = s[start++];
	cpy[i] = '\0';
	return (cpy);
}
