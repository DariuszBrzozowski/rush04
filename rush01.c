/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrzozow <dbrzozow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 13:21:23 by dbrzozow          #+#    #+#             */
/*   Updated: 2026/05/09 13:59:07 by dbrzozow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char ch);

void	ft_print_row(int length, char frst_ch, char mid_ch, char lst_ch)
{
	int	i;

	i = 1;
	while (i <= length)
	{
		if (i == 1)
		{
			ft_putchar(frst_ch);
		}
		else if (i < length)
		{
			ft_putchar(mid_ch);
		}
		else
		{
			ft_putchar(lst_ch);
		}
		i++;
	}
	ft_putchar('\n');
}


void	rush(int x, int y)
{
	int	x_cur;

	x_cur = 1;
	while (x_cur <= x)
	{
		if (x_cur == 1)
		{
			ft_print_row(y, '/', '*', '\\');
		}
		else if (x_cur < x)
		{
			ft_print_row(y, '*', ' ', '*');
		}
		else
		{
			ft_print_row(y, '\\', '*', '/');
		}
		x_cur++;
	}
}
