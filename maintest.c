/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uclement <uclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 12:19:32 by uclement          #+#    #+#             */
/*   Updated: 2022/11/16 16:59:36 by uclement         ###   ########.fr       */
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
	int x;

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

//toupper
	c = 'a';
	printf("\n-> toupper\n");
	if (toupper(c) == ft_toupper(c))
		printf("Ok\n");
	else
		printf("K-O\n");
	c = '4';
	if (toupper(c) == ft_toupper(c))
		printf("Ok\n");
	else
		printf("K-O\n");

//tolower
	c = 'a';
	printf("\n-> tolower\n");
	if (tolower(c) == ft_tolower(c))
		printf("Ok\n");
	else
		printf("K-O\n");
	c = '4';
	if (tolower(c) == ft_tolower(c))
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

//strchr
	printf("\n-> strchr\n");
	x = 's';
	strcpy(str1,"Je suis Ulysse");
	printf("%s\n",strchr(str1,x));
	printf("%s\n",ft_strchr(str1,x));


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
	printf("\n-> strlen\n");
	if(strlen("test") == ft_strlen("1234"))
		printf("Ok\n");
	else
		printf("K-O\n");
	if(strlen("test") == ft_strlen("123"))
		printf("K-O\n");
	else
		printf("OK\n");
	if(strlen("") == ft_strlen(""))
		printf("OK\n");
	else
		printf("K-O\n");

//bzero

	printf("\n-> bzero\n");
	strcpy(str1,"Je suis Ulysse");
	strcpy(str2,"Je suis Ulyssz");
	bzero(str1,1);
	ft_bzero(str2,1);
	if ((strcmp(str1,str2) == 0))
		printf("OK\n");
	else
		printf("K-O\n");

	strcpy(str1,"Je suis Ulysse");
	strcpy(str2,"Je suis Ulyssz");
	bzero(str1,1);
	ft_bzero(str2,0);
	if ((strcmp(str1,str2) == 0))
		printf("K-O\n");
	else
		printf("OK\n");

//memmove
	printf("\n-> memmove\n");
	strcpy(str1,"Ulysse");
	strcpy(str2,"bachibouzouk");
	memmove(str2,str1,6);
	printf("%s",str2);
}