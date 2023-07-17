/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axmichal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 23:55:23 by axmichal          #+#    #+#             */
/*   Updated: 2023/07/16 00:36:19 by axmichal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	inversion;

	a = 0;
	b = size - 1;
	while (a < size / 2)
	{
		inversion = tab[a];
		tab[a] = tab[b];
		tab[b] = inversion;
		a++;
		b--;
	}
}
