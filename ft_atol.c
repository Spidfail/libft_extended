/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 14:31:14 by guhernan          #+#    #+#             */
/*   Updated: 2021/08/16 14:31:15 by guhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long int	ft_build_number(const char *str, size_t i, int sgn)
{
	long int	rtn;

	rtn = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		rtn *= 10;
		rtn += str[i] - '0';
		i++;
	}
	return (rtn * sgn);
}

long int	ft_atol(const char *str)
{
	size_t		i;
	int			sgn;

	i = 0;
	sgn = 1;
	if (str == NULL)
		return (-1);
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sgn = -1;
		i++;
	}
	return (ft_build_number(str, i, sgn));
}
