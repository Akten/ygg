/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcherfi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 23:27:31 by wcherfi           #+#    #+#             */
/*   Updated: 2017/03/30 23:27:35 by wcherfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char const *str)
{
	int i;
	int	neg;
	int result;

	i = 0;
	neg = 0;
	result = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		neg++;
		i++;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	if (neg)
		result = -result;
	return (result);
}
