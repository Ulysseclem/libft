/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uclement <uclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 12:19:32 by uclement          #+#    #+#             */
/*   Updated: 2022/11/14 15:48:48 by uclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"
#include <ctype.h>


int	main()
{
	char c;
	char    str1[50];
	char    str2[50];
	char	*str3;

//isalnum
	c = '8';
	printf("\n-> is_alnum\n");
	if (((isalnum(c) && ft_isalnum(c)) > 0))
		printf("Ok\n");
	else
		printf("K-O\n");
	if (((isalnum(c) && ft_isalnum(c)) == 0))
		printf("K-O\n");
	else
		printf("Ok\n");
	c = '%';
	if ((isalnum(c) && ft_isalnum(c)) == 0)
		printf("Ok\n");
	else
		printf("K-O\n");

//isalpha
	c = 'a';
	printf("\n-> is_alpha\n");
	if (((isalpha(c) && ft_isalpha(c)) > 0))
		printf("Ok\n");
	else
		printf("K-O\n");
	if (((isalpha(c) && ft_isalpha(c)) == 0))
		printf("K-O\n");
	else
		printf("Ok\n");
	c = '1';
	if ((isalpha(c) && ft_isalpha(c)) == 0)
		printf("Ok\n");
	else
		printf("K-O\n");

//isascii
	c = 'a';
	printf("\n-> is_ascii\n");
	printf("%d == %d\n", isascii(c), ft_isascii(c));
	if (((isascii(c) && ft_isascii(c)) > 0))
		printf("Ok\n");
	printf("%d == %d\n", isascii(c), ft_isascii(c));
	if (((isascii(c) && ft_isascii(c)) == 0))
		printf("K-O\n");
	else
		printf("Ok\n");
	c = 0x80;
	printf("%d == %d\n", isascii(c), ft_isascii(c));
	if ((isascii(c) && ft_isascii(c)) == 0)
		printf("Ok\n");
	else
		printf("K-O\n");

//isprint
	c = 'a';
	printf("\n-> is_print\n");
	printf("%d == %d\n", isprint(c), ft_isprint(c));
	if (((isprint(c) && ft_isprint(c)) > 0))
		printf("Ok\n");
	printf("%d == %d\n", isprint(c), ft_isprint(c));
	if (((isprint(c) && ft_isprint(c)) == 0))
		printf("K-O\n");
	else
		printf("Ok\n");
	c = 15;
	printf("%d == %d\n", isprint(c), ft_isprint(c));
	if ((isprint(c) && ft_isprint(c)) == 0)
		printf("Ok\n");
	else
		printf("K-O\n");

//isdigit
	c = '8';
	printf("\n-> is_digit\n");
	if (((isdigit(c) && ft_isdigit(c)) > 0))
		printf("Ok\n");
	else
		printf("K-O\n");
	if (((isdigit(c) && ft_isdigit(c)) == 0))
		printf("K-O\n");
	else
		printf("OK\n");
	c = 'b';
	if ((isdigit(c) && ft_isdigit(c)) == 0)
		printf("Ok\n");
	else
		printf("K-O\n");
	
//memset
	printf("\n-> memset\n");
	strcpy(str1,"Je suis Ulysse");
	strcpy(str2,"Je suis Ulysse");
	memset(str1,'X',3);
	ft_memset(str2,'X',3);

	if ((strcmp(str1,str2) == 0))
		printf("OK\n");
	else
		printf("KO\n");
	strcpy(str1,"Je suis Ulysse");
	strcpy(str2,"Je suis Ulysse");
	memset(str1,'Y',14);
	ft_memset(str2,'Y',14);

	if ((strcmp(str1,str2) == 0))
		printf("OK\n");
	else
			printf("KO\n");

	strcpy(str1,"");
	strcpy(str2,"");
	memset(str1,'Z',1);
	ft_memset(str2,'Z',1);

	if ((strcmp(str1,str2) == 0))
		printf("OK\n");
	else
			printf("KO\n");

//strlen
	str3 = "ulysse";
	printf("\n-> strlen");
	if(strlen(str3) == ft_strlen(str3))
		printf("ok");

}