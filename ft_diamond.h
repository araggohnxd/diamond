/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_diamond.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maolivei <maolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 16:43:43 by maolivei          #+#    #+#             */
/*   Updated: 2022/03/27 21:03:28 by maolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DIAMOND_H
# define FT_DIAMOND_H

# include <stdio.h>

typedef struct s_struct
{
	int	max;
	int	symbol;
	int	blanks;
	int	current;
	int	increment;
}	t_struct;

# define TRUE 1

#endif
