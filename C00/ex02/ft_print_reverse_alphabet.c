/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qupham <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 09:23:21 by qupham            #+#    #+#             */
/*   Updated: 2022/10/13 09:23:33 by qupham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	re_alpha;

	re_alpha = 'z';
	while (re_alpha >= 'a')
	{
		write(1, &re_alpha, 1);
		re_alpha--;
	}
}
