/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gagonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 15:21:42 by gagonzal          #+#    #+#             */
/*   Updated: 2017/11/28 15:31:24 by gagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char const *str;
//	int len;
//	int len2;
	int i;
	int j;

//	len2 = ft_strlen(s2);
//	len = ft_strlen(s1);
	if(!s1 || !s2)
		return (0);
	if ((str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)))) == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s1 && s1[j])
	{
		((char*)str)[i] = ((char*)s1)[j];
		i++;
		j++;
	}
	j = 0;
	while (s2 && s2[j])
	{
		((char*)str)[i] = ((char*)s2)[j];
		i++;
		j++;
	}
	((char*)str)[i] = '\0';
	return (char*)(str);
}
