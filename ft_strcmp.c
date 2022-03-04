/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 14:34:11 by guhernan          #+#    #+#             */
/*   Updated: 2021/08/16 14:34:12 by guhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t			i;
	unsigned char	*us1;
	unsigned char	*us2;

	us1 = (unsigned char *)s1;
	us2 = (unsigned char *)s2;
	i = 0;
	if (s1 == NULL && s2 == NULL)
		return (0);
	while (s1[i])
	{
		if (us1[i] != us2[i] || !us1[i] || !us2[i])
			return (us1[i] - us2[i]);
		i++;
	}
	if (s1[i] != s2[i])
		return (us1[i] - us2[i]);
	return (0);
}
