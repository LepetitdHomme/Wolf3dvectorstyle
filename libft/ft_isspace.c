/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isblank.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csellier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/21 19:25:30 by csellier          #+#    #+#             */
/*   Updated: 2015/12/21 19:57:21 by csellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isspace(char *s)
{
	int i;

	i = 0;
	while (s[i] == '\n' || s[i] == '\t' || s[i] == '\v'
			|| s[i] == ' ' || s[i] == '\f' || s[i] == '\r')
	{
		i++;
	}
	return (i);
}
