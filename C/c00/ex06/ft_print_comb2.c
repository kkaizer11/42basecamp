/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaizer-@student.42sp.org.br <coder@stu    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 23:23:21 by mkaizer-@st       #+#    #+#             */
/*   Updated: 2022/04/12 00:28:41 by mkaizer-@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_comb2_part(int a, int b)
{
	if (a == 98 && b == 99)
	{
		ft_putchar(48 + a / 10);
		ft_putchar(48 + a % 10);
		ft_putchar(' ');
		ft_putchar(48 + b / 10);
		ft_putchar(48 + b % 10);
	}
	else
	{
		ft_putchar(48 + a / 10);
		ft_putchar(48 + a % 10);
		ft_putchar(' ');
		ft_putchar(48 + b / 10);
		ft_putchar(48 + b % 10);
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			print_comb2_part(a, b);
			b ++;
		}
		a ++;
	}
}
