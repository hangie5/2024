/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_numbers.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: tjlin <tjlin@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/04 13:13:41 by tjlin         #+#    #+#                 */
/*   Updated: 2024/06/04 15:04:25 by tjlin         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	h;

	h = '0';
	while (h <= '9')
	{
		write(1, &h, 1);
		h++;
	}
}

// int	main(void)
// {
// 	ft_print_numbers();
// 	return (0);
// }
