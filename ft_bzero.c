/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdurot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/16 15:17:29 by qdurot            #+#    #+#             */
/*   Updated: 2017/04/16 15:17:32 by qdurot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	i;
	unsigned char	*tmp;

	i = 0;
	tmp = s;
	while (i < n)
	{
		tmp[i] = 0;
		i++;
	}
	s = tmp;
}