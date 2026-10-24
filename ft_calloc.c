/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwattez <vwattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 01:48:19 by vwattez           #+#    #+#             */
/*   Updated: 2026/10/21 01:48:20 by vwattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nb, size_t size)
{
	void	*ptr;

	ptr = malloc(nb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nb * size);
	return (ptr);
}

/*#include <stdio.h>
int main()
{
	int	i;
	int	nb;
	int	*ptr;

	i = 0;
	nb = 10;
	ptr = (int *) ft_calloc(nb, sizeof(int));
	if (!ptr)
		return (1);
	
	while (i < nb)
	{
		ptr[i] = i;
		i++;
	}
	i = 0;
	while (i < nb)
	{
		printf("%d ", ptr[i]);
		i++;
	}
	free(ptr);
	return (0);
}*/