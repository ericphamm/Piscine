/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qupham <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 14:08:49 by qupham            #+#    #+#             */
/*   Updated: 2022/10/19 14:08:51 by qupham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp_var;
	int	i;

	i = 0;
	while (size > i)
	{
		temp_var = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = temp_var;
		i++;
		size--;
	}
}
