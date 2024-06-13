/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasherif <kasherif@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 19:30:12 by kasherif          #+#    #+#             */
/*   Updated: 2024/06/09 19:34:37 by kasherif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	check_top(int col, int x);
void	check_bottom(int col, int x);
void	check_body(int col, int x);

void	rush(int x, int y)
{
	int	row;
	int	col;

	row = 0;
	while (row < y)
	{
		col = 0;
		while (col < x)
		{
			if (row == 0)
				check_top(col, x);
			else if (row == y - 1)
				check_bottom(col, x);
			else
				check_body(col, x);
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}

void	check_top(int col, int x)
{
	if (col == 0)
		ft_putchar('o');
	else if (col == x - 1)
		ft_putchar('o');
	else
		ft_putchar('-');
}

void	check_bottom(int col, int x)
{
	if (col == 0)
		ft_putchar('o');
	else if (col == x - 1)
		ft_putchar('o');
	else
		ft_putchar('-');
}

void	check_body(int col, int x)
{
	if (col == 0 || col == x - 1)
		ft_putchar('|');
	else
		ft_putchar(' ');
}
