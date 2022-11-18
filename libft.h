/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uclement <uclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 12:14:37 by uclement          #+#    #+#             */
/*   Updated: 2022/11/18 11:56:55 by uclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_FT
#define LIB_FT


int	ft_isalnum(char);
int ft_isalpha(char);
int ft_toupper(int);
int	ft_tolower(int);
int ft_isascii(char);
int ft_isdigit(char);
int ft_isprint(char);
int ft_memset(char*,int,int);
char	*ft_strchr(char *,int);
char	*ft_strrchr(const char *,int);
int		ft_strncmp(const char *, const char *, size_t );
long unsigned int ft_strlen(char*);
char	*ft_strnstr(const char *, const char *, size_t);

void ft_bzero(char*,int);

char *strnstr(const char *, const char *, size_t);

#endif
