/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qupham <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 09:50:15 by qupham            #+#    #+#             */
/*   Updated: 2022/10/13 09:50:18 by qupham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_is_negative(int n)
{
	char	negative;

	if (n >= 0)
	{
		negative = 'P';
		write (1, &negative, 1);
	}
	else
	{
		negative = 'N';
		write (1, &negative, 1);
	}
}
