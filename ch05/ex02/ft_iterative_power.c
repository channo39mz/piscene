/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chpuasir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 14:13:45 by chpuasir          #+#    #+#             */
/*   Updated: 2022/10/21 15:17:28 by chpuasir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	ans;

	i = 1;
	ans = 1;
	if ((nb == 0 && power != 0) || power < 0)
		return (0);
	if ((power == 0) || ((nb < 0) && (power == 0)))
		return (1);
	while (i <= power)
	{
		ans *= nb;
		i++;
	}
	return (ans);
}
/*
int	main(void)
{
	int	a = 4;
	int	b = 2;
	printf("%d" , ft_iterative_power(a, b));
}*/
