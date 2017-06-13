/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcherfi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 23:27:31 by wcherfi           #+#    #+#             */
/*   Updated: 2017/06/12 23:39:50 by wcherfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int		check(int result, int signe)
{
	if (signe)
		return (int)(-result);
	return (int)(result);
}

int				ft_atoi(const char *str)
{
	int	i;
	int	neg;
	int	result;

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
		neg = 1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if ((result == 214748364) && (str[i] == '8'))
			return (-2147483648);
		result = result * 10 + str[i++] - 48;
	}
	return (check(result, neg));
}
