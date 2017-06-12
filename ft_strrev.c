/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcherfi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 23:38:39 by wcherfi           #+#    #+#             */
/*   Updated: 2017/03/30 23:38:42 by wcherfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	char	*cpy;

	i = ft_strlen(str);
	j = -1;
	if (!(cpy = (char*)malloc(sizeof(char) * i + 1)))
		return (NULL);
	cpy[i--] = '\0';
	while (str[++j])
		cpy[i--] = str[j];
	return (cpy);
}
