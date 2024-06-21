/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strupcase.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: tjlin <tjlin@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/15 17:25:50 by tjlin         #+#    #+#                 */
/*   Updated: 2024/06/17 15:06:44 by tjlin         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str [i] <= 'z'))
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

int main(void)
{
    char str[] = "hello123";
    printf("%s", ft_strupcase(str));
}
