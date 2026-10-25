/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwattez <vwattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 01:48:01 by vwattez           #+#    #+#             */
/*   Updated: 2026/10/21 01:48:01 by vwattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*temp;

	i = 0;
	if (little[0] == '\0')
		return ((char *) big);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		if (big[i + j] == little[j])
		{
			temp = (char *) &big[i];
			while (little[j] != '\0'
				&& little[j] == big[i + j] && (i + j) < len)
				j++;
			if (little[j] == '\0')
				return (temp);
		}
		i++;
	}
	return (NULL);
}

/*#include <stdio.h>
int main()
{
	char big[] = "Bonjour je suis Vic, comment vas tu ?";
	char little[] = "Vic";

	printf("%s", ft_strnstr(big, little, 18));
}*/