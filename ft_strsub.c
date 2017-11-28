/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gagonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 15:14:09 by gagonzal          #+#    #+#             */
/*   Updated: 2017/11/28 19:33:31 by gagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	if (!(str = ft_strnew(len)))
		return (NULL);
	while (s && i < len)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	return (str);
}
