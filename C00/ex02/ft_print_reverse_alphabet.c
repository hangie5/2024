/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_reverse_alphabet.c                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tjlin <tjlin@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/04 13:03:24 by tjlin         #+#    #+#                 */
/*   Updated: 2024/06/04 15:04:27 by tjlin         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	h;

	h = 'z';
	while (h >= 'a')
	{
		write(1, &h, 1);
		h--;
	}
}

// int	main(void)
// {
// 	ft_print_reverse_alphabet();
// 	return (0);
// }
