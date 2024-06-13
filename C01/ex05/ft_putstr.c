/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_pustr.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tjlin <tjlin@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/06 15:28:18 by tjlin         #+#    #+#                 */
/*   Updated: 2024/06/06 15:29:11 by tjlin         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

// int main(void)
// {
//     ft_putstr("hello");
//     return(0);
// }
