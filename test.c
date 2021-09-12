/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcherfi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/30 06:39:59 by wcherfi           #+#    #+#             */
/*   Updated: 2017/08/31 20:31:48 by wcherfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

bool	last_pos(size_t size)
{
	if (dash[size][size] != '.')
		return (1);
	return (0);
}

void	move()
{
	if (!last_pos(size))
	{
		descend;
	}
	if (!last_pos(size))
		right;
}

void	descend()
{
}

void	right()
{
}
// a valider le format du fichier, 4*4 et l'adjacence des briques.
void	ident

int		id(char *dash)
{
	int		*id;
	int		error;
	int		i;

	i = 0;
	error = 1;
	id = 10;
	while (y < 4 && error == 1)
	{
		while (x < 4 && error == 1)
		{
			if (dash[x][y] == '#')
			{
				id[i++] = (10 * x) + y;
				error = check_adj(x, y, dash);
			}
			else if (!dash[x][y] == '.')
				error = -1;
			x++;
			}
		y++;
	}
	return (error * id);
}

void	clean_pieces(int *pieces)
{
	int		min_abs;
	int		min_ord;

	min_abs = 8+1;
	min_ord = 9;
	while (++i < 4)
	{
		if (pieces.abs[i] < min_abs)
			min_abs = pieces.abs[i];
		if (pieces.ord[i] < min_ord)
			min_ord = pieces.ord[i];
	}
	i = -1;
	while (++i < 4)
	{
		pieces.abs[i] -= min_abs;
		pieces.ord[i] -= min_ord;
	}
	clean_pieces(pieces->next);
}
