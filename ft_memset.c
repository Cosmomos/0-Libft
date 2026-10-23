/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwattez <vwattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 01:46:46 by vwattez           #+#    #+#             */
/*   Updated: 2026/10/21 02:53:15 by vwattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *p, int val, size_t nb)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)p;
	i = 0;
	while (i < nb)
	{
		ptr[i] = (unsigned char)val;
		i++;
	}
	return (p);
}

/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int	main()
{
	int array [] = { 54, 85, 20, 63, 21 };
	int array2 [] = { 54, 85, 20, 63, 21 };
	size_t size = sizeof(int) * 5;
	int length = 0;

	while (length < 5)
	{
		printf("%d ", array[length]);
		length++;
	}
	printf("\n");
	memset(array, 0, size);
	length = 0;
	while (length < 5)
	{
		printf("%d ", array[length]);
		length++;
	}
	printf("\n\n");

	length = 0;
	while (length < 5)
	{
		printf("%d ", array2[length]);
		length++;
	}
	printf("\n");
	ft_memset(array2, 0, size);
	length = 0;
	while (length < 5)
	{
		printf("%d ", array2[length]);
		length++;
	}
	printf("\n");
	return (0);
}*/