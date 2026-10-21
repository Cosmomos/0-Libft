/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwattez <vwattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 01:47:25 by vwattez           #+#    #+#             */
/*   Updated: 2026/10/21 01:47:25 by vwattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	else
		return (c);
}

/*#include <stdio.h>
#include <ctype.h>
int main()
{
	unsigned char c;
	c = 'A';
	printf("%d\n", ft_tolower(c));
	printf("%d", tolower(c));
}*/