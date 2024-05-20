/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgermano <dgermano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 20:01:24 by dgermano          #+#    #+#             */
/*   Updated: 2024/05/17 09:57:14 by dgermano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s_return;

	s_return = (char *)malloc(sizeof(char) * ft_strlen(s));
	if (!s_return)
		return (NULL);
	ft_memcpy(s_return, s, ft_strlen(s));
	return (s_return);
}
