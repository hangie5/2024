/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_range.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tjlin <tjlin@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/25 15:48:46 by tjlin         #+#    #+#                 */
/*   Updated: 2024/06/25 17:26:29 by tjlin         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int *ft_range(int min, int max)
{
	int	*c;
	int	i;

	if (min >= max)
		return (0);
	c = malloc((max - min) * sizeof(int));
	if (c == 0)
		return (0);
	i = 0;
	while (i < (max - min))
	{
		c[i] = min + i;
		i++;
	}
	return (c);
}

int main(void)
{
	int	*c;
	int i;
	
	i = 0;
	c = ft_range(0, 11);
	while (i < 11)
	{
		printf("%d", c[i]);
		i++;
	}
	free(c);
}
