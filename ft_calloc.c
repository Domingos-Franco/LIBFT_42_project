/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgermano <dgermano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 08:25:19 by dgermano          #+#    #+#             */
/*   Updated: 2024/05/17 09:42:24 by dgermano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*s;

	s = (char *)malloc(nmemb * size);
	if (!s || nmemb == 0 || size == 0)
		return (NULL);
	ft_bzero (s, nmemb * size);
	return (s);
}
