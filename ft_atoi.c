/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwattez <vwattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 01:48:12 by vwattez           #+#    #+#             */
/*   Updated: 2026/10/21 01:48:13 by vwattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *s)
{
	int	i;
	int	nb;
	int	sign;

	i = 0;
	nb = 0;
	sign = 1;
	while ((s[i] >= 9 && s[i] <= 13) || s[i] == 32)
		i++;
	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		nb = nb * 10 + s[i] - '0';
		i++;
	}
	return (nb * sign);
}

/*#include <stdio.h>
#include <stdlib.h>
int main()
{
	char *s = "  \f  \n   2147483647";
	printf("%d\n", ft_atoi(s));
	printf("%d\n", atoi(s));
	return (0);
}*/
