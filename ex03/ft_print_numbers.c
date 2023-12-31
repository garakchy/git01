/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaymyra <tbaymyra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 03:27:49 by tbaymyra          #+#    #+#             */
/*   Updated: 2023/09/18 17:02:03 by tbaymyra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int		number;
	char	number_to_character;

	number = 0;
	while (number <= 9)
	{
		number_to_character = number + '0';
		write(1, &number_to_character, 1);
		number++;
	}
}

int	main(void)
{
	ft_print_numbers();
}
