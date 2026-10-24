/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwattez <vwattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 01:47:18 by vwattez           #+#    #+#             */
/*   Updated: 2026/10/21 01:47:18 by vwattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t destSize)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (src[len] != '\0')
		len++;
	if (destSize == 0)
		return (len);
	while (i < (destSize - 1) && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}

/*#include <stdio.h>
#include <string.h>
int main()
{
	char dest[13];
	const char *src = "World!";
	char dest2[13];
	const char *src2 = "World!";

	printf("%ld\n", ft_strlcpy(dest, src, sizeof(dest)));
	printf("%s | %s\n", dest, src);
	printf("%ld\n", strlcpy(dest2, src2, sizeof(dest2)));
	printf("%s | %s\n", dest2, src2);
}*/