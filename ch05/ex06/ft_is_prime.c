/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chpuasir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 15:01:44 by chpuasir          #+#    #+#             */
/*   Updated: 2022/10/21 15:18:12 by chpuasir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_is_prime(int nb)
{
	int	p;

	p = 2;
	if (nb <= 1)
	{
		return (0);
	}
	while (p <= nb / p)
	{
		if (nb % p == 0)
			return (0);
		p++;
	}
	return (1);
}
/*
int	main(void)
{
	printf("%d",ft_is_prime(29));
	printf("%d",ft_is_prime(4));
}*/
