/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcherfi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 20:07:53 by wcherfi           #+#    #+#             */
/*   Updated: 2017/08/31 20:07:55 by wcherfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <unistd.h>

typedef struct		s_piece
{
	int				abs[4];
	int				ord[4];
	struct s_piece	*next;
}					t_piece;

#endif
