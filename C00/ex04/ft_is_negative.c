/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_is_negative.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: tjlin <tjlin@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/04 13:23:12 by tjlin         #+#    #+#                 */
/*   Updated: 2024/06/07 13:44:18 by tjlin         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
		write (1, "N", 1);
	else
		write (1, "P", 1);
}

int	main(void)
{
	ft_is_negative(2);
	ft_is_negative(0);
	ft_is_negative(-2);
	return (0);
}
