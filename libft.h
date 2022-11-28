/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uclement <uclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 12:14:37 by uclement          #+#    #+#             */
/*   Updated: 2022/11/28 14:55:02 by uclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_FT
#define LIB_FT

# include <string.h>
# include <stdlib.h>
# include <unistd.h>

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
size_t ft_strlen(const char *);
char	*ft_strnstr(const char *, const char *, size_t);
void	*ft_memchr(const void *, int, size_t);
void ft_bzero(char*,int);
int		ft_memcmp(const void *, const void *, size_t);
void	*ft_memcpy(void *, const void *, size_t);
int ft_atoi(const char*);
int ft_strlcat(char *, const char *, size_t);
size_t	ft_strlcpy(char *, const char *, size_t);
void	*ft_calloc(size_t, size_t);
char	*ft_strdup(const char *);
char	*ft_strtrim(char const *, char const *);
char    **ft_split(char const *, char );



char *strnstr(const char *, const char *, size_t);
size_t strlcat(char *, const char *, size_t);
size_t	strlcpy(char *, const char *, size_t);



#endif
