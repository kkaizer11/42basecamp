/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaizer-@student.42sp.org.br <coder@stu    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 03:04:54 by mkaizer-@st       #+#    #+#             */
/*   Updated: 2022/04/12 00:27:12 by mkaizer-@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	escreva_a_b_c(char a, char b, char c)
{
	if (a == '7')
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(c);
	}
	else
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(c);
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				escreva_a_b_c(a, b, c);
				c ++;
			}
			b ++;
		}
		a ++;
	}
}	
