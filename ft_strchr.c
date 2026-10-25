/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwattez <vwattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 01:47:41 by vwattez           #+#    #+#             */
/*   Updated: 2026/10/21 01:47:42 by vwattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	int	i;
	char	*find;

	i = 0;
	while (str[i] != ch && str[i] != '\0')
		i++;
	if (str[i] == ch)
	{
		find = (char *) &str[i];
		return (find);
	}
	return (NULL);
}

/*#include <stdio.h>
#include <string.h>
int main()
{
	char	str[] = "Hello, I'm dumb";
	char	*ptr;
	char	*ptr2;
	int		c;

	c = 'm';
	ptr = strchr(str, c);
	ptr2 = ft_strchr(str, c);
	printf("First %c in '%s' : '%s'\n", c, str, ptr);
	printf("First %c in '%s' : '%s'\n", c, str, ptr2);
}*/