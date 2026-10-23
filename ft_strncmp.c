/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwattez <vwattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 01:47:50 by vwattez           #+#    #+#             */
/*   Updated: 2026/10/21 01:47:50 by vwattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t len)
{
	size_t	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i] && i < len - 1)
		i++;
	return (s1[i] - s2[i]);
}

/*#include <string.h>
#include <stdio.h>
int main()
{
	char s1[13] = "Hello world!";
	char s2[13] = "Hello world!";

	printf("%d\n", ft_strncmp(s1, s2, 0));
	printf("%d", strncmp(s1, s2, 0));
}*/
