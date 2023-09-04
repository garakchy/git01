/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaymyra <tbaymyra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 08:48:50 by tbaymyra          #+#    #+#             */
/*   Updated: 2023/09/03 12:37:11 by tbaymyra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	satir;
	int	sutun;

	if (x < 1 || y < 1 || x > 2147483647 || y > 2147483647)
		write(1, "Error\n", 5);
	satir = 1;
	while (satir <= y)
	{
		sutun = 1;
		while (sutun <= x)
		{
			if ((sutun > 1 && sutun < x) && (satir > 1 && satir < y))
				ft_putchar(' ');
			else if ((sutun > 1 && sutun < x) && (satir == 1 || satir == y))
				ft_putchar('-'); 
			else if ((satir > 1 && satir < y) && (sutun == 1 || sutun == x))
				ft_putchar('|');
			else
				ft_putchar('o');
			sutun++;
		}
		ft_putchar('\n');
		satir++;
	}
}
