/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tjlin <tjlin@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/12 22:41:30 by tjlin         #+#    #+#                 */
/*   Updated: 2024/06/17 15:05:55 by tjlin         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char str[10] = "lol";
	char str2[10];
	char *ptr;
	char *ptr2;

	ptr = str;
	ptr2 = str2;
	printf("%s", ft_strcpy(ptr2, ptr));
}
