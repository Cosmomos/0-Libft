/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwattez <vwattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 01:46:28 by vwattez           #+#    #+#             */
/*   Updated: 2026/10/21 02:30:54 by vwattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c >= 48 && c <= 57))
		return (1);
	else
		return (0);
}

/*#include <stdio.h>
#include <ctype.h>
int main()
{
	unsigned char c;
	c = ' ';
	printf("%d\n", ft_isalnum(c));
	printf("%d", isalnum(c));
}*/