/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulysse <ulysse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 14:34:25 by ulysse            #+#    #+#             */
/*   Updated: 2022/12/15 15:07:02 by ulysse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t		i;

	if (!s || !f)
		return (NULL);
	str = malloc(sizeof (char) * ft_strlen(s) + 1);
	if (!str)
		return(NULL);
	i = 0;
	while (i < ft_strlen(s))
	{
		str[i] = f(i,s[i]);
		i++;
	}
	str[i] = '\0';
	return(str);
}

// #include <stdio.h>

// char f(unsigned int i, char c)
// {
// 	(void) i;
// 	char str;
// 	str = c + 1;
// 	return (str);
// }

// int main()
// {
// 	char str1[] = "abc";
// 	char* str2;
// 	str2 = ft_strmapi(str1, *f);
// 	printf("%s\n", str2);
// }