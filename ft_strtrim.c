/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gagonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 15:25:52 by gagonzal          #+#    #+#             */
/*   Updated: 2017/11/28 16:24:31 by gagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_separate(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	return (0);
}

static int	ft_nb_word(const char *s)
{
	int i;
	int ret;

	i = 0;
	ret = 0;
	while (s && s[i])
	{
		while (s[i] && (is_separate(s[i])))
			i++;
		if (s[i] && !(is_separate(s[i])))
			ret++;
		while (s[i] && !(is_separate(s[i])))
			i++;
	}
//	printf ("nb_word == %d\n", ret);
	return (ret);
}

static int	ft_sizestring(const char *s)
{
	int i;
	int ret;
	int	nb_word;

	i = 0;
	ret = 0;
	nb_word = ft_nb_word(s);
	while (s[i] && (is_separate(s[i])))
		i++;
	while (nb_word)
	{
		while (s[i] && !(is_separate(s[i])))
		{
			ret++;
			i++;
		}
		nb_word--;
		while (nb_word && s[i] && (is_separate(s[i])))
		{
			ret++;
			i++;
		}
	}
//	printf("sizestring is = %d\n", ret);
	return (ret);
}

char		*ft_strtrim(char const *s)
{
	char const	*str;
	int			len;
	int			i;
	int			j;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	len = ft_sizestring(s);
	if ((str = ft_strnew(len)) == NULL)
		return (NULL);
	while (is_separate(s[i]))
		i++;
	while (s && s[i] && len)
	{
		((char*)str)[j] = ((char*)s)[i];
		j++;
		i++;
		len--;
	}
	((char*)str)[j] = '\0';
	return (char*)(str);
}
/*
int	main(int ac, char **av)
{
	char	str[] = "  \t   \t\nBon\t \njour\t\n \n   ";
	char	str2[] = "bonjour";
	char	str3[] = " \t\t\t  ";
	char	*r;

	ft_strtrim(NULL);
	r = ft_strtrim(str);
	if (strcmp(r, "bon\t \njour"))
	{
		printf("kotest1\n");
		printf("%s\n", r);
		free(r);
	}
	
	r = ft_strtrim(str2);
	if (strcmp(r, "bonjour"))
	{
		printf ("kotest2\n");
		free(r);
	}
	r = ft_strtrim(str3);
	if (strcmp(r, "  ") || str3 == r)
	{
		printf("kotest3");
		free(r);
	}
	
	return (0);
}
*/
