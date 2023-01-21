/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qupham <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 13:17:22 by qupham            #+#    #+#             */
/*   Updated: 2022/10/26 13:17:24 by qupham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	whitespaces_getsign(char *str, int *ptr_i)
{
	int	count;
	int	i;

	i = 0;
	count = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
	{
		i++;
	}
	while (str[i] != '\0' && (str[i] == 43 || str[i] == 45))
	{
		if (str[i] == 45)
			count = count * -1;
		i++;
	}
	*ptr_i = i;
	return (count);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	result;
	int	i;

	result = 0;
	sign = whitespaces_getsign(str, &i);
	while (str[i] && str[i] >= 48 && str[i] <= 57)
	{
		result = result * 10;
		result = result + str[i] - 48;
		i++;
	}
	result = result * sign;
	return (result);
}
