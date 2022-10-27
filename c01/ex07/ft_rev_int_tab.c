/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chpuasir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:06:13 by chpuasir          #+#    #+#             */
/*   Updated: 2022/10/12 20:05:37 by chpuasir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	x;
	int	wat;

	x = size - 1;
	i = 0;
	while (i < size / 2)
	{
		wat = tab[i];
		tab[i] = tab[x];
		tab[x] = wat;
		x--;
		i++;
	}
}
