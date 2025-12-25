/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oused-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 14:05:40 by oused-da          #+#    #+#             */
/*   Updated: 2025/10/25 16:19:11 by oused-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	join(char const *s1, char const *s2, char *s)
{
	int	i;
	int	l;

	i = 0;
	while (s1[i])
	{
		s[i] = s1[i];
		i++;
	}
	l = i;
	i = 0;
	while (s2[i])
	{
		s[l + i] = s2[i];
		i++;
	}
	s[l + i] = 0;
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*res;
	size_t	len1;
	size_t	len2;

	if (!s2)
		return (NULL);
	len1 = s1 ? ft_strlen(s1) : 0;
	len2 = ft_strlen(s2);
	res = malloc(len1 + len2 + 1);
	if (!res)
		return (NULL);
	join(s1, s2, res);
	return (res);
}

// char	*ft_strjoin(char const *s1, char const *s2)
// {
// 	char	*s;
// 	int		tl;

// 	if (!s1 || !s2)
// 		return (NULL);
// 	tl = ft_strlen((char *)s1) + ft_strlen((char *)s2);
// 	s = (char *)malloc(sizeof(char) * (tl + 1));
// 	if (!s)
// 		return (NULL);
// 	join(s1, s2, s);
// 	return (s);
// }
