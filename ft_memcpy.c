/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgermano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 12:30:35 by dgermano          #+#    #+#             */
/*   Updated: 2024/05/17 12:31:32 by dgermano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*destx;
	char	*srcx;

	i = 0;
	destx = (char *)dest;
	srcx = (char *)src;
	while (i < n)
	{
		destx[i] = srcx[i];
		i++;
	}
	dest = destx;
	return (dest);
}
