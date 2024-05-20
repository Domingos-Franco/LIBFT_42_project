/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgermano <dgermano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 07:58:21 by dgermano          #+#    #+#             */
/*   Updated: 2024/05/16 07:58:33 by dgermano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t			i;
	int				dst_len;

	i = 0;
	dst_len = ft_strlen(dst);
	while (i < size)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	return (ft_strlen(dst));
}
