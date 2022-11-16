/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uclement <uclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 12:14:37 by uclement          #+#    #+#             */
/*   Updated: 2022/11/16 16:42:38 by uclement         ###   ########.fr       */
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
long unsigned int ft_strlen(char*);
void ft_bzero(char*,int);

#endif
