/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chpuasir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:42:52 by chpuasir          #+#    #+#             */
/*   Updated: 2022/10/21 15:16:36 by chpuasir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	ans;

	ans = 1;
	i = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		ans = ans * i;
		i++;
	}
	return (ans);
}
/*
int     main(int argc, char *argv[])
{
	int a = 5;
	printf("%d" , ft_iterative_factorial(a));
	ft_iterative_factorial(a);
}*/
