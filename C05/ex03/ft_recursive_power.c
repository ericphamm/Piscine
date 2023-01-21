/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qupham <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 17:23:01 by qupham            #+#    #+#             */
/*   Updated: 2022/11/01 17:23:02 by qupham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power > 1)
	{
		return (result * ft_recursive_power(nb, power - 1));
	}
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (result);
}
