/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwattez <vwattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 01:48:17 by vwattez           #+#    #+#             */
/*   Updated: 2026/10/21 01:48:17 by vwattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destSize)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;
	size_t	j;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (dest_len >= destSize)
		return (destSize + src_len);
	i = dest_len;
	j = 0;
	while (i < (destSize - 1) && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest_len + src_len);
}

/*#include <stdio.h>
#include <string.h>
int main()
{
	char dest[13] = "Hello";
	const char *src = " World!";
	char dest2[13] = "Hello";
	const char *src2 = " World!";

	printf("%ld\n", ft_strlcat(dest, src, 3));
	printf("%s\n", dest);
	printf("%ld\n", strlcat(dest2, src2, 3));
	printf("%s\n", dest2);
}*/