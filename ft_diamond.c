/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_diamond.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maolivei <maolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 19:52:59 by maolivei          #+#    #+#             */
/*   Updated: 2022/03/27 21:08:58 by maolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_diamond.h"

void	ft_diamond(void)
{
	t_struct	ints;

	printf("Insert diamond width: \n");
	scanf("%d", &ints.max);
	ints.current = 1;
	ints.increment = 2;
	while (ints.max > 1)
	{
		ints.symbol = ints.current;
		ints.blanks = (ints.max / 2) - (ints.current / 2);
		while (ints.blanks-- > 0)
			printf(" ");
		while (ints.symbol-- > 0)
			printf("*");
		printf("\n");
		ints.current += ints.increment;
		if (ints.current >= ints.max)
			ints.increment *= -1;
		if (ints.current < 0)
			break ;
	}
	if (ints.max == 1)
		printf("*\n");
	if (ints.max <= 0)
		printf("Invalid width.\n");
}

int	main(void)
{
	ft_diamond();
	return (0);
}
