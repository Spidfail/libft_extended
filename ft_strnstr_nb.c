/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr_nb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 14:33:48 by guhernan          #+#    #+#             */
/*   Updated: 2021/08/16 14:33:49 by guhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnstr_nb(const char *haystack, const char *ndle, size_t len)
{
	const char	*tmp;
	size_t		i;
	size_t		n;

	i = 0;
	n = 0;
	tmp = 0;
	if (!haystack || !ndle || len == 0 || len > INT_MAX)
		return (-1);
	n = ft_strlen(ndle);
	tmp = ft_strnstr(haystack, ndle, len);
	if (n > INT_MAX || ft_strlen(haystack) > INT_MAX || !tmp)
		return (-1);
	i += 1;
	while (tmp)
	{
		len -= (tmp + n) - haystack;
		if (len < n)
			return (i);
		i++;
		tmp = ft_strnstr((tmp + 1), ndle, ft_strlen(tmp));
	}
	return (i);
}
