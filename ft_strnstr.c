/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gagonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 15:03:04 by gagonzal          #+#    #+#             */
/*   Updated: 2017/11/22 02:00:05 by gagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "string.h"
/*
char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
		size_t i;
		size_t j;
		char *tmp;
		char *ret = NULL;

		i = 0;
		j = 0;
		tmp = (char*)0;
		if (s2[i] == '\0')
				return (char*)(s1);
		if (ft_strlen(s1) > len)
		{
			tmp = ft_strsub(s1, 0, len);
			ret = ft_strstr(tmp, s2);
			free(tmp);
		}
//		if (tmp)
//		{
//		}
		else
			return (ft_strstr(s1, s2));
		return (ret);
}
*/
char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t i;
	size_t j;
	size_t k;

	i = 0;
	k = 0;
	if (s2[i] == '\0')
		return (char*)(s1);
	while (s1[i] && i < len)
	{
		j = 0;
		if (s1[i] == s2[j])
		{
			k = i;
			while (s1[i] && s2[j] && s1[i] == s2[j] && i < len)
			{
				i++;
				j++;
			}
			if ((j && s2[j] == '\0' ) || (i == len - 1 && s2[j] == s1[i]))
				return (char*)(s1 + k);
			if (i == len - 1)
				return (NULL);
			i = k;
		}
		i++;
	}
	return (NULL);
}
/*
int		main(void)
{

	
		char    *s1 = "MZIRIBMZIRIBMZE123";
		char    *s2 = "MZIRIBMZE";
		size_t  max = ft_strlen(s2);

		char    *i1 = strnstr(s1, s2, max);
		char    *i2 = ft_strnstr(s1, s2, max);

		printf("{%s},%zu\n", i1, max);
		printf("[%s]\n", i2);

	char buf[10];
	bzero(buf, 10);
	strcpy(buf, "un deux 9");
	printf ("%s\n",strnstr(buf, "9", 10));
	printf ("%s\n", ft_strnstr(buf, "9", 10));
	printf("%s\n", strnstr(buf, "deux", 5));
	printf("%s\n", ft_strnstr(buf, "deux", 5));
	printf("%s\n", strnstr("bababam", "babam", 7));
	printf("%s\n", ft_strnstr("bababam", "babam", 7));
	printf("%s\n", strnstr("un deux 9", "9", 10));
	printf("%s\n", ft_strnstr("un deux 9", "9", 10));
	buf[9] = '6';
	buf[1] = 0;
	printf("buf : %s\n", buf);
	printf("%s\n", ft_strnstr(buf, "deux", 10));
	printf("%s\n", strnstr(buf, "deux", 10));
	printf("%s\n", ft_strnstr("ozarabozaraboze123", "ozaraboze", 15));
	printf("%s\n", strnstr("ozarabozaraboze123", "ozaraboze", 15));
}
*/
