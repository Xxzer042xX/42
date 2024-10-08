/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 02:23:02 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/03/17 02:23:02 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Function to write a character to standard output
void	ft_putchar(char c)
{
	write (1, &c, 1);
}

// Function to check whether the position is safe for placing a queen
int	is_safe(int board[10], int row, int col)
{
	int	i;

	i = 0;
	while (i < col)
	{
		if ((board[i] == row) || (i - board[i] == col - row) || \
			(i + board[i] == col + row))
			return (0);
		i++;
	}
	return (1);
}

// Recursive function to solve the puzzle
void	solve(int board[10], int col, int *solutions)
{
	int	i;

	if (col == 10)
	{
		i = 0;
		while (i < 10)
		{
			ft_putchar(board[i] + '0');
			i++;
		}
		ft_putchar('\n');
		(*solutions)++;
		return ;
	}
	i = 0;
	while (i < 10)
	{
		if (is_safe(board, i, col))
		{
			board[col] = i;
			solve(board, col + 1, solutions);
		}
		i++;
	}
}

// Main function to launch the solver
int	ft_ten_queens_puzzle(void)
{
	int	board[10];
	int	solutions;

	solutions = 0;
	solve(board, 0, &solutions);
	return (solutions);
}
/*I.A*/