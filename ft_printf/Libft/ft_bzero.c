/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mscheffe <mscheffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 11:34:12 by mscheffe          #+#    #+#             */
/*   Updated: 2022/11/23 22:15:43 by mscheffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	char	*p;

	p = s;
	if (s == 0)
		return (NULL);
	while (n)
	{
		*p = '\0';
		p++;
		n--;
	}
	return (s);
}
