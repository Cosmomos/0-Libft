/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwattez <vwattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 01:46:50 by vwattez           #+#    #+#             */
/*   Updated: 2026/10/21 01:46:50 by vwattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*s1;
	size_t			i;

	i = 0;
	s1 = (unsigned char *) s;
	while (i < n)
	{
		s1[i] = '\0';
		i++;
	}
}

/*#include <stdio.h>
#include <string.h>
int main(void)
{
	char s1[15] = "Hello World!";
	char s2[15] = "Hello World!";

	ft_bzero(s1, 5);
	bzero(s2, 5);

	printf("%s\n", s1 + 5);
	printf("%s\n", s2 + 5);

	if (memcmp(s1, s2, 15) == 0)
		printf("Good\n");
	else
		printf("Bad\n");
	return (0);
}*/