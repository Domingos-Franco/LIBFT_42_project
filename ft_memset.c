/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgermano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 12:40:46 by dgermano          #+#    #+#             */
/*   Updated: 2024/05/18 18:30:06 by dgermano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*setd;

	i = 0;
	setd = (unsigned char *)s;
	while (i < n)
	{
		setd[i] = c;
		i++;
	}
	return (s = setd);
}
