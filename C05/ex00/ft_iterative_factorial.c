/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qupham <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 23:11:14 by qupham            #+#    #+#             */
/*   Updated: 2022/10/30 23:11:15 by qupham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	unsigned int	i;

	i = 1;
	while (0 < nb)
	{
		i = i * nb;
		nb--;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (i);
}
