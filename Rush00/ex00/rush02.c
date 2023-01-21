/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fal-raye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 11:48:23 by fal-raye          #+#    #+#             */
/*   Updated: 2022/10/15 13:27:08 by fal-raye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_row(int length, char start, char mid, char end)
{
	int	row;

	row = 1;
	while (row <= length)
	{
		if (row == 1)
		{
			ft_putchar(start);
		}
		else if (row == length)
		{
			ft_putchar(end);
		}
		else
		{
			ft_putchar(mid);
		}
		row++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	parser;

	parser = 1;
	if (x >= 1 && y >= 1)
	{
		while (parser <= y)
		{
			if (parser == 1)
			{
				ft_print_row(x, 'A', 'B', 'A');
			}
			else if (parser == y)
			{
				ft_print_row(x, 'C', 'B', 'C');
			}
			else
			{
				ft_print_row(x, 'B', ' ', 'B');
			}
			parser++;
		}
	}
}
