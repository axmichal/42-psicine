/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush0X.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrey <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 09:25:47 by wrey              #+#    #+#             */
/*   Updated: 2023/07/16 12:03:34 by wrey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}


void	ft_ligne(char left, char center, char right ,int x)
{

	ft_putchar(left);
	x--;
	while (x > 1)
	{
		ft_putchar(center);
		x--;
	}
	if (x == 1)
		ft_putchar(right);
	ft_putchar('\n');
}

void	rush00(int x, int y)
{
	if (x < 1 || y < 1)
		return;
	ft_ligne('/', '*','\\', x);
	y--;
	while(y > 1)
	{
		ft_ligne('*', ' ','*', x);
		y--;
	}
	if (y == 1)
		ft_ligne('\\', '*','/', x);
}

int	main(void)
{
	rush00(5, 5);
	return (0);
}
