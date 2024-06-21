/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_uppercase.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: tjlin <tjlin@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/15 17:06:50 by tjlin         #+#    #+#                 */
/*   Updated: 2024/06/17 15:06:31 by tjlin         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str [i] <= 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int main(void)
{
	printf("%d", ft_str_is_uppercase(""));
}
