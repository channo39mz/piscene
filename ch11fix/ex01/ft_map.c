/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chpuasir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:38:10 by chpuasir          #+#    #+#             */
/*   Updated: 2022/10/27 12:20:10 by chpuasir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*ja;
	int	*d;

	i = 0;
	ja = malloc(length * sizeof(int));
	d = ja;
	if (!d)
		return (0);
	while (i < length)
	{
		ja[i] = (*f)(tab[i]);
		i++;
	}
	return (ja);
}
