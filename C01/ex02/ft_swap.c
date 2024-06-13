/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_swap.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tjlin <tjlin@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/05 16:20:48 by tjlin         #+#    #+#                 */
/*   Updated: 2024/06/05 16:26:23 by tjlin         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	lol;

	lol = *a;
	*a = *b;
	*b = lol;
}

// int main(void)
// {
//     int nine = 9;
//     int six = 6;

//     ft_swap(&nine, &six); 
//     printf("%d, %d", nine, six);
//     return (0);
// }
