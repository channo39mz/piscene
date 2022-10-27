/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chpuasir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 13:59:36 by chpuasir          #+#    #+#             */
/*   Updated: 2022/10/15 16:10:49 by chpuasir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int	main()
{
	printf("%d\n" , ft_strcmp("Hello" , "Hello1"));
	printf("%d\n" , ft_strcmp("Hello" , "He"));
	printf("%d\n" , ft_strcmp("He" , "Hello1"));
	printf("%d\n" , ft_strcmp("Hello" , "Hello"));
}*/
