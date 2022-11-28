/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uclement <uclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 12:19:32 by uclement          #+#    #+#             */
/*   Updated: 2022/11/28 15:34:42 by uclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <strings.h>
#include <stdio.h>
#include "libft.h"
#include <ctype.h>
#include <stddef.h>
#include <stdlib.h>



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


//strchr
	printf("\n-> strchr\n");
	x = 's';
	strcpy(str1,"Je suis Ulysse");
	if ((strcmp(strchr(str1,x),ft_strchr(str1,x)) == 0))
		printf("Ok\n");
	else
		printf("K-O");
	
	x = 's';
	strcpy(str1,"baldi");
	if ((strchr(str1,x) == NULL && ft_strchr(str1,x) == NULL))
		printf("Ok\n");
	else
		printf("K-O");

	x = 's';
	strcpy(str1,"");
	if ((strchr(str1,x) == NULL && ft_strchr(str1,x) == NULL))
		printf("Ok\n");
	else
		printf("K-O");

	x = '\0';
	strcpy(str1,"test");
	// printf("%s",strchr(str1,x));
	// printf("%s",ft_strchr(str1,x));

	if ((strcmp(strchr(str1,x),ft_strchr(str1,x)) == 0))
		printf("Ok\n");
	else
		printf("K-O");

//strrchr
	printf("\n-> strrchr\n");
	x = 's';
	strcpy(str1,"Je suis Ulysse");
	if ((strcmp(strrchr(str1,x),ft_strrchr(str1,x)) == 0))
		printf("Ok\n");
	else
		printf("K-O");
	
	x = 's';
	strcpy(str1,"baldi");
	if ((strrchr(str1,x) == NULL && ft_strrchr(str1,x) == NULL))
		printf("Ok\n");
	else
		printf("K-O");

	x = 's';
	strcpy(str1,"");
	if ((strrchr(str1,x) == NULL && ft_strrchr(str1,x) == NULL))
		printf("Ok\n");
	else
		printf("K-O");

	x = '\0';
	strcpy(str1,"test");
	// printf("%s",strrchr(str1,x));
	// printf("%s",ft_strrchr(str1,x));

	if ((strcmp(strrchr(str1,x),ft_strrchr(str1,x)) == 0))
		printf("Ok\n");
	else
		printf("K-O");

//strncmp

	printf("\n-> strncmp\n");
	strcpy(str1,"Je suis Ulysse");
	strcpy(str2,"Je suis Ulysse");
	printf("%d\n",strncmp(str1,str2,5));
	printf("%d\n",ft_strncmp(str1,str2,5));

	strcpy(str1,"Je suis Ulysse");
	strcpy(str2,"Je suis Thomas");
	printf("%d\n",strncmp(str1,str2,5));
	printf("%d\n",ft_strncmp(str1,str2,5));

	strcpy(str1,"Je suis Ulysse");
	strcpy(str2,"Je toto");
	printf("%d\n",strncmp(str1,str2,5));
	printf("%d\n",ft_strncmp(str1,str2,5));

	strcpy(str1,"Jz");
	strcpy(str2,"Ja");
	printf("%d\n",strncmp(str1,str2,5));
	printf("%d\n",ft_strncmp(str1,str2,5));

	strcpy(str1,"Je suis Ulysse");
	strcpy(str2,"Je suis Ulysse");
	printf("%d\n",strncmp(str1,str2,0));
	printf("%d\n",ft_strncmp(str1,str2,0));

	strcpy(str1,"Je suis Ulysse");
	strcpy(str2,"Je suis Ulysse");
	printf("%d\n",strncmp(str1,str2,45));
	printf("%d\n",ft_strncmp(str1,str2,45));

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

//strnstr
	printf("\n-> strnstr\n");
	strcpy(str1,"Je suis Ulysse");
	strcpy(str2,"suis");
	printf("%s\n",strnstr(str1,str2,20));
	printf("%s\n",ft_strnstr(str1,str2,20));

	printf("vrai fonction :");
	strcpy(str1,"Je suis Ulysse");
	strcpy(str2,"test");
	if(strnstr(str1,str2,20) != NULL)
		printf("%s\n",strnstr(str1,str2,20));
	else if (strnstr(str1,str2,20) == NULL)
		printf("NULL\n");
	else
		printf("K-O\n");

	printf("ma fonction :");
	strcpy(str1,"Je suis Ulysse");
	strcpy(str2,"test");
	if(ft_strnstr(str1,str2,20) != NULL)
		printf("%s\n",ft_strnstr(str1,str2,20));
	else if (ft_strnstr(str1,str2,20) == NULL)
		printf("NULL\n");
	else
		printf("K-O\n");


	printf("vrai fonction :");

	strcpy(str1,"Je suis Ulysse");
	strcpy(str2,"");
	if(strnstr(str1,str2,20) != NULL)
		printf("%s\n",strnstr(str1,str2,20));
	else if (strnstr(str1,str2,20) == NULL)
		printf("NULL\n");
	else
		printf("K-O\n");

	printf("ma fonction :");
	strcpy(str1,"Je suis Ulysse");
	strcpy(str2,"");
	if(ft_strnstr(str1,str2,20) != NULL)
		printf("%s\n",ft_strnstr(str1,str2,20));
	else if (ft_strnstr(str1,str2,20) == NULL)
		printf("NULL\n");
	else
		printf("K-O\n");


	printf("vrai fonction :");

	strcpy(str1,"Je suis Ulysse");
	strcpy(str2,"Je suis Ulysse Clement");
	if(strnstr(str1,str2,20) != NULL)
		printf("%s\n",strnstr(str1,str2,20));
	else if (strnstr(str1,str2,20) == NULL)
		printf("NULL\n");
	else
		printf("K-O\n");

	printf("ma fonction :");
	strcpy(str1,"Je suis Ulysse");
	strcpy(str2,"suis Ulysse Clement");
	if(ft_strnstr(str1,str2,20) != NULL)
		printf("%s\n",ft_strnstr(str1,str2,20));
	else if (ft_strnstr(str1,str2,20) == NULL)
		printf("NULL\n");
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
	printf("%s\n",str2);

//memchr
	printf("\n-> memchr\n");
	strcpy(str1,"ulysse");
	printf("%p\n",memchr(str1,'s',6));
	printf("%p\n",ft_memchr(str1,'s',6));
	printf("%p\n",memchr(str1,'z',6));
	printf("%p\n",ft_memchr(str1,'z',6));
	printf("%p\n",memchr(str1,'s',2));
	printf("%p\n",ft_memchr(str1,'s',2));
	printf("%p\n",memchr(str1,'z',14));
	printf("%p\n",ft_memchr(str1,'z',14));

//memcmp
	printf("\n-> memcmp\n");
	printf("%d\n",memcmp("ulysse","ulysse",6));
	printf("%d\n",ft_memcmp("ulysse","ulysse",6));
	printf("%d\n",memcmp("ulysse","theo",6));
	printf("%d\n",ft_memcmp("ulysse","theo",6));
	printf("%d\n",memcmp("ulysse","zagathe",6));
	printf("%d\n",ft_memcmp("ulysse","zagathe",6));

//memcpy
	printf("\n-> memcpy\n");
	strcpy(str1,"Je suis Ulysse");
	strcpy(str2,"test");
	printf("%p\n",memcpy(str1,str2,7));
	strcpy(str1,"Je suis Ulysse");
	strcpy(str2,"test");
	printf("%p\n",ft_memcpy(str1,str2,7));

//atoi
	printf("\n-> atoi\n");
	printf("%d\n",atoi("123"));
	printf("%d\n",ft_atoi("123"));

	printf("%d\n",atoi("+123"));
	printf("%d\n",ft_atoi("+123"));

	printf("%d\n",atoi("-123"));
	printf("%d\n",ft_atoi("-123"));

	printf("%d\n",atoi("+-123"));
	printf("%d\n",ft_atoi("+-123"));

	printf("%d\n",atoi("12 3456465"));
	printf("%d\n",ft_atoi("12 3456465"));

	printf("%d\n",atoi("    123 "));
	printf("%d\n",ft_atoi("    123 "));

	printf("%d\n",atoi("    123 ulysse"));
	printf("%d\n",ft_atoi("    123 ulysse"));


	printf("%d\n",atoi("Ulysse 123"));
	printf("%d\n",ft_atoi("Ulysse 123"));
	
	printf("%d\n",atoi("-\r123 "));
	printf("%d\n",ft_atoi("-\r123 "));

//strlcat
	printf("\n-> strlcat\n");

	// printf("%ld\n",strlcat("ulysse","clement",6));
	// 	printf("%d\n",ft_strlcat("ulysse","clement",6));


	// printf("%ld\n",strlcat("ulysse","clement",2));
	// 	printf("%d\n",ft_strlcat("ulysse","clement",2));


	// printf("%ld\n",strlcat("ulysse","clement",18));

	printf("%ld\n",strlcat(NULL,"",0));
	printf("%d\n",ft_strlcat(NULL,"",0));


	// printf("%ld\n",strlcat("ulysse","",6));
	// printf("%d\n",ft_strlcat("ulysse","",6));

//strlcpy
	printf("\n-> strlcpy\n");
	char buffer[50];
	
	printf("%ld\n",strlcpy(buffer,"",6));
	printf("%ld\n",ft_strlcpy(buffer,"",6));


	// printf("%ld\n",strlcpy(buffer,"clement",2));
	// printf("%ld\n",ft_strlcpy(buffer,"clement",2));


	// // printf("%ld\n",strlcat("ulysse","clement",18));

	// printf("%ld\n",strlcpy(buffer,"test",6));
	// printf("%ld\n",ft_strlcpy(buffer,"test",6));


	// printf("%ld\n",strlcpy(buffer,"",6));
	// printf("%ld\n",ft_strlcpy(buffer,"",6));

//calloc
	printf("\n-> calloc\n");

	char *p = ft_calloc(0, 2);
	char z[] = {0, 0, 0, 0};
	printf("%d\n",memcmp(p, z, 4));

//strdup
	printf("\n-> strdup\n");
	printf("%s\n",strdup("123"));
	printf("%s\n",ft_strdup("123"));
	printf("%s\n",strdup(""));
	printf("%s\n",ft_strdup(""));

//strdup
	printf("\n-> strdup\n");
	printf("%s\n",strdup("123"));
	printf("%s\n",ft_strdup("123"));
	printf("%s\n",strdup(""));
	printf("%s\n",ft_strdup(""));

//strtrim
	printf("\n-> strtrim\n");
	printf("%s\n",ft_strtrim("123test123","123"));
	printf("%s\n",ft_strtrim("",""));

//Split
	printf("\n-> split\n");
	int i = 0;
	char **tab;
		
	tab = ft_split("split  ||this|for|me||f|||!|", '|');
	while (i < 4)
	{
		printf("string %d : %s\n", i, tab[i]);
		i++;
	}
}