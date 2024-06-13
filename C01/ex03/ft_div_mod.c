/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_div_mod.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tjlin <tjlin@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/05 18:52:15 by tjlin         #+#    #+#                 */
/*   Updated: 2024/06/05 19:25:35 by tjlin         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int main(void)
// {
// 	int	a = 6;
// 	int	b = 2;
// 	int answer;
// 	int	remainder;

// 	ft_div_mod(a, b, &answer, &remainder);
// 	printf("%d, %d", answer, remainder);
// 	return (0);
// }
