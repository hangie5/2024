/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tjlin <tjlin@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/06 16:56:25 by tjlin         #+#    #+#                 */
/*   Updated: 2024/06/08 20:43:00 by tjlin         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)

{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

// int main(void)
// {
// 	char	*c= "lolol";
// 	printf("%d", ft_strlen(c));
// }
