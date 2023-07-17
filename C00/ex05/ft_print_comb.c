/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axmichal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:09:53 by axmichal          #+#    #+#             */
/*   Updated: 2023/07/15 18:51:27 by axmichal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int 	a;
	int 	b;
	int 	c;

	a = '0'; 
	b = '1';
	c = '2';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
			
				if (a != '7')
					write(1, ",", 1);
					write(1, " ", 1);
				c++;
			}
			b++;
		}			
		a++;
	}
}
int main()
{
	ft_print_comb();
	return (0);
}
