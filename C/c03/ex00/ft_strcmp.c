/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaizer- <mkaizer-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 03:04:44 by mkaizer-          #+#    #+#             */
/*   Updated: 2022/04/20 23:43:02 by mkaizer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	subtraction;

	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1 ++;
		s2 ++;
	}
	subtraction = (unsigned char)*s1 - (unsigned char)*s2;
	return (subtraction);
}
#include <stdio.h>
#include <string.h>
 int main()
 {
	char *a;
	char *z;
	int r;
	int p;

	a = "Abcde";
	z = "abcde";
	r = ft_strcmp(a, z);
	printf("Exercicio: %d", r);
	printf("\n");

	p = strcmp(a, z);
	printf("Original: %d", p);
	printf("\n");
	
 }