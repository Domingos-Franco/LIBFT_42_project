/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgermano <dgermano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 10:50:41 by dgermano          #+#    #+#             */
/*   Updated: 2024/05/18 11:43:01 by dgermano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		l1;
	int		l2;
	int		i;
	int		j;
	char	*joined;

	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	joined = (char *)malloc(sizeof(char) * (l1 + l2) + 1);
	if (!joined)
		return (NULL);
	i = 0;
	j = 0;
	while (i < l1)
	{
		joined[i] = s1[i];
		i++;
	}
	while (j < l2)
	{
		joined[i + j] = s2[j];
		j++;
	}
	return (joined);
}
