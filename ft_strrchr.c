/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwattez <vwattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 01:47:47 by vwattez           #+#    #+#             */
/*   Updated: 2026/10/21 01:47:48 by vwattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	char	*find;
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	while (str[i] != ch && i >= 0)
		i--;
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
	ptr = strrchr(str, c);
	ptr2 = ft_strrchr(str, c);
	printf("Last %c in '%s' : '%s'\n", c, str, ptr);
	printf("Last %c in '%s' : '%s'\n", c, str, ptr2);
}*/