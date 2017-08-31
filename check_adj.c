/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_adj.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcherfi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 07:11:23 by wcherfi           #+#    #+#             */
/*   Updated: 2017/08/31 20:18:41 by wcherfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// a valider le format du fichier, 4*4 et l'adjacence des briques.
int		check_adj(int abs, int ord, char **dash, int size)
{
	if (abs - 1 > 0)
		if (dash[abs - 1][ord] == '#')
			return (1);
	if (abs + 1 < size)
		if (dash[abs + 1][ord] == '#')
			return (1);
	if (ord - 1 > 0)
		if (dash[abs][ord - 1] == '#')
			return (1);
	if (ord + 1 < size)
		if (dash[abs][ord + 1] == '#')
			return (1);
	return (-1);
}

int		id(char **dash)
{
	int		id;
	int		error;
	int		x;
	int		y;

	error = 1;
	id = 0;
	x = 0;
	while (x < 4 && error == 1)
	{
		while (y < 4 && error == 1)
		{
			if (dash[x][y] == '#')
				error = check_adj(x, y, dash);
			else if (!(dash[x][y] == '.'))
				error = -1;
			y++;
		}
		x++;
	}
	return (error * id);
}
