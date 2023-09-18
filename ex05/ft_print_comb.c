/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaymyra <tbaymyra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 19:43:34 by tbaymyra          #+#    #+#             */
/*   Updated: 2023/09/18 17:08:38 by tbaymyra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_nos(int a, int b, int c, char d);

void	ft_print_comb(void);

int	main(void)
{
	ft_print_comb();
}

void	ft_print_comb(void)
{
	int		digits;
	int		tens;
	int		hundreds;
	char	digit_to_character;

	digits = 0;
	while (digits <= 7)
	{
		tens = digits + 1;
		while (tens <= 8)
		{
			hundreds = tens + 1;
			while (hundreds <= 9)
			{
				print_nos(digits, tens, hundreds, digit_to_character);
				hundreds++;
			}
		}
		tens++;
	}
	digits++;
}

void	print_nos(int digits, int tens, int hundreds, char digit_to_character)
{
	digit_to_character = digits + '0';
	write(1, &digit_to_character, 1);
	digit_to_character = tens + '0';
	write(1, &digit_to_character, 1);
	digit_to_character = hundreds + '0';
	write(1, &digit_to_character, 1);
	if (digits == 7 && tens == 8 && hundreds == 9)
		return ;
	write(1, ",", 1);
	write(1, " ", 1);
}
