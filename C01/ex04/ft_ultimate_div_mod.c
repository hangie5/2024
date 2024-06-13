/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ultimate_div_mod.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: tjlin <tjlin@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/06 14:56:40 by tjlin         #+#    #+#                 */
/*   Updated: 2024/06/06 14:58:26 by tjlin         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a;
	mod = *b;
	*a = div / mod;
	*b = div % mod;
}

// int main(void)
// {
//     int a;
//     int b;
//     a = 5;
//     b = 2;

//     ft_ultimate_div_mod(&a, &b);
//     printf("%d\n", a);
//     printf("%d", b);
//     return (0);
// }
