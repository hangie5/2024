/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sort_int_tab.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: tjlin <tjlin@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/08 21:28:15 by tjlin         #+#    #+#                 */
/*   Updated: 2024/06/08 21:29:23 by tjlin         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	b;

	while (size >= 0)
	{
		a = 0;
		while (a < size - 1)
		{
			if (tab[a] > tab[a + 1])
			{
				b = tab [a];
				tab[a] = tab [a + 1];
				tab [a + 1] = b;
			}
			a++;
		}
		size--;
	}
}

// int main(void)
// {
//     int tab[6] = {7, 6, 3, 4, 2, 5};
//     int size = 6;

//     ft_sort_int_tab(tab, size);
//     printf("%d, %d, %d, %d, %d, %d", 
// tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
//     return(0);
// }
