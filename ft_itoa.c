/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcherfi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 23:29:09 by wcherfi           #+#    #+#             */
/*   Updated: 2017/03/30 23:29:11 by wcherfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_malloc(int n)
{
	int i;

	i = 0;
	while ((n = n / 10) != 0)
		i++;
	return (i);
}

char		*ft_itoa(int n)
{
	char	*str;
	int		size;
	int		neg;

	neg = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	size = ft_malloc(n) + 2;
	if (n < 0)
	{
		size++;
		neg = 1;
		n *= -1;
	}
	if (!(str = (char*)malloc(sizeof(char) * size)))
		return (str);
	str[--size] = '\0';
	while (size--)
	{
		str[size] = n % 10 + '0';
		n = n / 10;
	}
	if (neg)
		str[0] = '-';
	return (str);
}
