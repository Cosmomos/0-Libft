/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwattez <vwattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 01:47:21 by vwattez           #+#    #+#             */
/*   Updated: 2026/10/21 01:47:22 by vwattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	else
		return (c);
}

/*#include <stdio.h>
#include <ctype.h>
int main()
{
	unsigned char c;
	c = 'a';
	printf("%d\n", ft_toupper(c));
	printf("%d", toupper(c));
}*/