/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_rev_int_tab.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: tjlin <tjlin@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/06 17:15:14 by tjlin         #+#    #+#                 */
/*   Updated: 2024/06/08 21:28:54 by tjlin         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	b;

	a = 0;
	while (a < (size / 2))
	{
		b = tab[a];
		tab [a] = tab [size - 1 - a];
		tab [size - 1 - a] = b;
		a++;
	}
}

// int main(void)
// {
//     int tab[6] = {0, 1, 2, 3 ,4 ,5};
//     int size = 6;
//     ft_rev_int_tab(tab, size);
//     printf("%d, %d, %d, %d, %d, %d", 
// tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
//     return(0);
// }
