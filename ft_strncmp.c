/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 14:51:37 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/04/03 20:03:19 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	char	*s1cpy;
	char	*s2cpy;

	s1cpy = (char *)s1;
	s2cpy = (char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	if (s1[i] != s2[i])
		return (s1[i] - s2[i]);
	else
		return (0);
}