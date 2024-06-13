/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: kasherif <kasherif@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/09 19:30:15 by kasherif      #+#    #+#                 */
/*   Updated: 2024/06/11 18:08:55 by tjlin         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	rush(int x, int y);
void	print_error_msg(void);

int	string_to_int(char *str)
{
	int	count_str;
	int	result;
	int	i;

	i = 0;
	count_str = 0;
	while (str[count_str] != '\0')
		count_str++;
	while (i < count_str)
	{
		if (str[i] < '1' || str[i] > '9')
			return (-1);
		i++;
	}
	i = 0;
	result = 0;
	while (str[i] != '\0')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result);
}



int	main(int argc, char *argv[])
{
	int	width;
	int	height;

	width = 4;
	height = 4;
	if (argc == 2 || argc > 3)
	{
		print_error_msg();
		return (-1);
	}
	else if (argc == 3)
	{
		width = string_to_int(argv[1]);
		height = string_to_int(argv[2]);
	}
	if ((width < 0 || height < 0))
		return (-2);
	rush(width, height);
	return (0);
}

void	print_error_msg(void)
{
	write(1, "Invalid CL input. Usage: ./a.out. ", 34);
	write(1, "Then either adjust the main, ", 29);
	write(1, "or enter 'width' and 'height' in the CL.", 40);
}
