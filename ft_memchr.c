/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwattez <vwattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 01:47:53 by vwattez           #+#    #+#             */
/*   Updated: 2026/10/21 01:47:53 by vwattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *mem_block, int target, size_t size)
{
	unsigned char	trg;
	unsigned char	*m_block;
	size_t			i;

	i = 0;
	trg = (unsigned char) target;
	m_block = (unsigned char *) mem_block;
	while (i < size)
	{
		if (m_block[i] == trg)
			return ((void *)&m_block[i]);
		i++;
	}
	return (NULL);
}

/*#include <stdio.h>
#include <string.h>
int main()
{
	const unsigned int	size = 10;
	char				data[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
	void				*found;
	void				*found2;
	size_t				nb;

	nb = 50;
	found = memchr(data, nb, size);
	if (found != NULL)
		printf("%d is found\n", nb);
	else
		printf("%d is not found\n", nb);
	found2 = ft_memchr(data, nb, size);
	if (found2 != NULL)
		printf("%d is found\n", nb);
	else
		printf("%d is not found\n", nb);
	return (0);
}*/