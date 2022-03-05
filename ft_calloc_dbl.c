/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dbl_chrcalloc.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 14:31:27 by guhernan          #+#    #+#             */
/*   Updated: 2021/08/16 14:32:25 by guhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc_dbl(const size_t size_elem, const size_t raw,
		const size_t column)
{
	void	**rtn;

	rtn = NULL;
	if (raw < 0 || column < 1 || size_elem < 1)
		return (rtn);
	return (ft_calloc(column, (sizeof(size_elem * raw))));
}
