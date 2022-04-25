/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaizer-@student.42sp.org.br <coder@stu    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 21:33:08 by jde-lima          #+#    #+#             */
/*   Updated: 2022/04/11 17:36:44 by mkaizer-@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c);

void	print_linha(char firstLast, char mid, int x)
{
	int	contador;

	contador = 0;
	while (contador < x)
	{
		if (contador == 0)
		{
			ft_putchar(firstLast);
			contador ++;
		}
		else if (contador < x)
		{
			ft_putchar(mid);
			contador ++;
			if (contador == (x - 1))
			{
				ft_putchar(firstLast);
				ft_putchar('\n');
				contador ++;
			}
		}
	}
}

void	quebra_linha(int x, int y)
{
	if (x == 1)
	{
		ft_putchar('\n');
	}
	else if (x == 2)
	{
		ft_putchar('\n');
	}
	if (y == 1)
	{
		ft_putchar('\n');
	}
}

int	rush(int x, int y)
{
	int	contador;

	contador = 0;
	while (contador < y)
	{
		if (contador == 0)
		{
			print_linha('o', '-', x);
			contador ++;
		
		}
		else if (contador < y)
		{
			print_linha('|', ' ', x);
			contador ++;
			quebra_linha (x, y);
			if (contador == (y - 1))
			{
				print_linha('o', '-', x);
				contador ++;
				quebra_linha (x, y);
			}
		}
	}
}
