/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 09:28:36 by mimoreir          #+#    #+#             */
/*   Updated: 2022/12/02 09:28:37 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_strchr(const char *s, int c)
{
	char	*tmp;
	char	a;

	tmp = (char *)s;
	a = (char)c;
	while (*tmp)
	{
		if (*tmp == a)
			return (tmp);
		tmp++;
	}
	if (*tmp == '\0' && a == '\0')
		return (tmp);
	else
		return (NULL);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*new;
	char	*aux;
	size_t	len1;
	size_t	len2;

	len1 = ft_strlen((char *)s1);
	len2 = ft_strlen((char *)s2);
	new = (char *)malloc(len1 + len2 + 1);
	if (!new)
		return (NULL);
	aux = new;
	ft_memcpy(aux, s1, len1);
	aux = aux + len1;
	ft_memcpy(aux, s2, len2);
	aux = aux + len2;
	*aux = '\0';
	return (new);
}

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (*s)
	{
		s++;
		len++;
	}
	return (len);
}

char	*initsave(char *save)
{
	if (!save)
	{
		save = malloc(1 * sizeof(char));
		*save = '\0';
	}
	return (save);
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*a;
	const char	*b;
	size_t		i;

	i = 0;
	a = dest;
	b = src;
	if (src == dest)
		return (dest);
	while (i < n)
	{
		*a = *b;
		a++;
		b++;
		i++;
	}
	return (dest);
}
