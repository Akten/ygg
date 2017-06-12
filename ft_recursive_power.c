/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcherfi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 23:34:04 by wcherfi           #+#    #+#             */
/*   Updated: 2017/03/30 23:34:14 by wcherfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_recursive_power(int nb, int power)
{
	if (power > 1)
		return (nb * (ft_recursive_power(nb, power - 1)));
	else if (power == 0)
		return (1);
	else if (power == 1)
		return (nb);
	return (0);
}
