/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaizer- <mkaizer-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 01:36:47 by mkaizer-          #+#    #+#             */
/*   Updated: 2022/04/20 15:35:27 by mkaizer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	subtraction;

	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2 && n > 0)
	{
		s1++;
		s2++;
		n --;
	}
	if (n == 0)
	{
		return (0);
	}
	subtraction = (*(unsigned char *)s1 - *(unsigned char *)s2);
	return (subtraction);
}
