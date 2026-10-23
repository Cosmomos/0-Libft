/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwattez <vwattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 01:46:53 by vwattez           #+#    #+#             */
/*   Updated: 2026/10/21 01:46:54 by vwattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy( void *dest, const void *src, size_t size)
{
	const unsigned char	*s;
	unsigned char		*d;
	size_t				i;

	i = 0;
	d = (unsigned char *) dest;
	s = (const unsigned char *) src;
	while (i < size)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int	array [] = { 54, 85, 20, 63, 21 };
	int	*copy = NULL;
	int	*copy2 = NULL;
	int	length = sizeof(int) * 5;

	copy = (int *) malloc(length);
	copy2 = (int *) malloc(length);
	memcpy(copy, array, length);
	ft_memcpy(copy2, array, length);
	length = 0;
	while (length < 5)
	{
		printf( "%d ", copy[length]);
		length++;
	}
	printf("\n");

	length = 0;
	while (length < 5)
	{
		printf( "%d ", copy[length]);
		length++;
	}
	printf("\n");
	free(copy);
	free(copy2);
	return (0);
}*/