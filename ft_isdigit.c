/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwattez <vwattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 01:46:23 by vwattez           #+#    #+#             */
/*   Updated: 2026/10/21 02:23:26 by vwattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

/*#include <stdio.h>
#include <ctype.h>
int main()
{
	unsigned char c;
	c = 'a';
	printf("%d\n", ft_isdigit(c));
	printf("%d", isdigit(c));
}*/