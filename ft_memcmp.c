/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwattez <vwattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 01:47:57 by vwattez           #+#    #+#             */
/*   Updated: 2026/10/21 01:47:57 by vwattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *p1, const void *p2, size_t size)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	size_t			i;

	ptr1 = (unsigned char *)p1;
	ptr2 = (unsigned char *)p2;
	i = 0;
	while (i < size && ptr1[i] == ptr2[i])
		i++;
	return (ptr1[i] - ptr2[i]);
}

/*#include <stdio.h>
#include <string.h>
int main()
{
	int	array1 [] = {54, 85, 20, 63, 21};
	int	array2 [] = {54, 85, 200, 63, 21};
	size_t	size = sizeof(int) * 5;

	printf("%d\n", memcmp(array1, array2, size));
	printf("%d\n", ft_memcmp(array1, array2, size));
	return (0);
}*/