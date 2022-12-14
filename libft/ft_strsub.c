/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 18:56:26 by oelkhams          #+#    #+#             */
/*   Updated: 2022/12/14 12:41:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *str;

	str = (char *)malloc(sizeof(char) * len + 1);
	if (!s || !str)
		return (NULL);
	str = ft_strncpy(str, (char *)s + start, len);
	str[len] = '\0';
	return (str);
}
