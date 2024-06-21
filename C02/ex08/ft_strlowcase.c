/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlowcase.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tjlin <tjlin@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/17 13:05:34 by tjlin         #+#    #+#                 */
/*   Updated: 2024/06/17 15:06:49 by tjlin         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str [i] <= 'Z'))
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

int main(void)
{
	char str[] = "HELLO123";
	printf("%s", ft_strlowcase(str));
}
