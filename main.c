/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtomala <jtomala@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:48:08 by jtomala           #+#    #+#             */
/*   Updated: 2021/12/01 12:42:36 by jtomala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	printf("                   START TESTING:\n");
	printf("------------------------------------------------------\n");

	printf("******FT_ISALPHA:******\n");
	char test1 = '+';
	char test2 = 'b';
	char test3 = 'C';
	int res;
	res = ft_isalpha(test1);
	printf("RESULT of non alph: %d, should be 0\n", res);
	res = ft_isalpha(test2);
	printf("RESULT of lowercase: %d, should be 1\n", res);
	res = ft_isalpha(test3);
	printf("RESULT of uppercase: %d, should be 1\n", res);
	printf("------------------------------------------------------\n");
	printf("******FT_ISDIGIT:******\n");
	test1 = '3';
	test2 = 'h';
	res = ft_isdigit(test1);
	printf("RESULT1: %d\n", res);
	res = ft_isdigit(test2);
	printf("RESULT2: %d\n", res);
	printf("------------------------------------------------------\n");
	printf("******FT_ISALNUM:******\n");
	test1 = '+';
	test2 = 'b';
	test3 = 'C';
	char test4 = '5';
	res = ft_isalnum(test1);
	printf("RESULT of non alph: %d, should be 0\n", res);
	res = ft_isalnum(test2);
	printf("RESULT of lowercase: %d, should be 1\n", res);
	res = ft_isalnum(test3);
	printf("RESULT of uppercase: %d, should be 1\n", res);
	res = ft_isalnum(test4);
	printf("RESULT of nummeric: %d, should be 1\n", res);
	printf("------------------------------------------------------\n");
	printf("******FT_ISASCII:******\n");
	test1 = '+';
	test2 = 'b';
	test3 = 'C';
	test4 = '5';
	int test5 = 127;
	res = ft_isascii(test1);
	printf("RESULT of non alph: %d, should be 1\n", res);
	res = ft_isascii(test2);
	printf("RESULT of lowercase: %d, should be 1\n", res);
	res = ft_isascii(test3);
	printf("RESULT of uppercase: %d, should be 1\n", res);
	res = ft_isascii(test4);
	printf("RESULT of nummeric: %d, should be 1\n", res);
	res = ft_isascii(test5);
	printf("RESULT of DEL: %d, should be 1\n", res);
	printf("------------------------------------------------------\n");
	printf("******FT_ISPRINT:******\n");
	int a = 19;
	while (a <= 127)
	{
		printf("%d ", ft_isprint(a));
		a++;
	}
	printf("\n");
	printf("------------------------------------------------------\n");
	printf("******FT_STRLEN:******\n");
	char c[20] = "Hello World!";
	printf("Length of '%s': %lu\n", c, ft_strlen(c));
	printf("------------------------------------------------------\n");
	printf("******FT_MEMSET:******\n");
	char str[11] = "0123456789";
	ft_memset(str, 'h', 3);
	printf("%s\n", str);
	printf("------------------------------------------------------\n");
	printf("******FT_BZERO:******\n");
	char str1[11] = "0123456789";
	printf("BEFORE: %s\n", str1);
	bzero(str1, 5);
	printf("ORIGINAL: %s\n", str1);
	char str2[11] = "0123456789";
	ft_bzero(str2, 5);
	printf("OWN: %s\n", str2);
	printf("------------------------------------------------------\n");
	printf("******FT_MEMCPY:******\n");
	char dst[50] = "Hello World, the sun is shining";
	char src[20] = "Copy me";
	printf("DST: %s\n", dst);
	char res1 = (int) memcpy(dst, src, 7);
	printf("ORIGINAL: %c\n", res1);
	res = (int) ft_memcpy(dst, src, 7);
	printf("OWN: %c\n", res1);
	printf("------------------------------------------------------\n");
	printf("******FT_MEMMOVE:******\n");
	printf("DST: %s\n", dst);
	res1 = (int) memmove(src, dst, 18);
	printf("ORIGINAL: %c\n", res1);
	res1 = (int) ft_memmove(src, dst, 18);
	printf("OWN: %c\n", res1);
	printf("------------------------------------------------------\n");
	printf("******FT_STRLCPY:******\n");
	char dst1[50] = "Hello World, the sun is shining";
	char dst2[50] = "Hello World, the sun is shining";
	printf("DST: %s\n", dst1);
	strlcpy(dst1, src, 8);
	printf("ORIGINAL: %s\n", dst1);
	ft_strlcpy(dst2, src, 7);
	printf("OWN: %s\n", dst2);
	printf("------------------------------------------------------\n");
	printf("******FT_STRLCAT:******\n");
	printf("DST: %s\n", dst1);
	strlcat(dst1, src, 8);
	printf("ORIGINAL: %s\n", dst1);
	ft_strlcat(dst2, src, 8);
	printf("OWN: %s\n", dst2);
	printf("------------------------------------------------------\n");
	printf("******FT_TOUPPER:******\n");
	char u = 'A';
	char l = 'b';
	char w = '-';
	printf("ORIGINAL:\n");
	printf("Uppercase (%c) stays uppercase: %c\n", u, toupper(u));
	printf("Lowercase (%c) to uppercase: %c\n", l, toupper(l));
	printf("wrong character (%c): %c\n", w, toupper(w));
	printf("OWN:\n");
	printf("Uppercase (%c) stays uppercase: %c\n", u, ft_toupper(u));
	printf("Lowercase (%c) to uppercase: %c\n", l, ft_toupper(l));
	printf("wrong character (%c): %c\n", w, ft_toupper(w));
	printf("------------------------------------------------------\n");
	printf("******FT_TOLOWER:******\n");
	printf("ORIGINAL:\n");
	printf("Uppercase (%c) to uppercase: %c\n", u, tolower(u));
	printf("Lowercase (%c) stays uppercase: %c\n", l, tolower(l));
	printf("wrong character (%c): %c\n", w, tolower(w));
	printf("OWN:\n");
	printf("Uppercase (%c) to uppercase: %c\n", u, ft_tolower(u));
	printf("Lowercase (%c) stays uppercase: %c\n", l, ft_tolower(l));
	printf("wrong character (%c): %c\n", w, ft_tolower(w));
	printf("------------------------------------------------------\n");
	printf("******FT_STRCHR:******\n");
	char s[20] = "Hello World!";
	int h = 'o';
	printf("ORIGINAL:\nIn: %s \nnot in: %s\n", strchr(s, h), strchr(s, 'f'));
	printf("OWN:\nIn: %s \nnot in: %s\n", ft_strchr(s, h), ft_strchr(s, 'f'));
	printf("------------------------------------------------------\n");
	printf("******FT_STRRCHR:******\n");
	printf("ORIGINAL:\nIn: %s \nnot in: %s\n", strrchr(s, h), strrchr(s, 'f'));
	printf("OWN:\nIn: %s \nnot in: %s\n", ft_strrchr(s, h), ft_strrchr(s, 'f'));
	printf("------------------------------------------------------\n");
	printf("******FT_STRNCMP:******\n");
	char str4[20] = "aaaa";
	char str5[20] =  "bbbb";
	char str6[20] = "aaaa";
	printf("ORIGINAL:\nless: %d \ngreater: %d\nequal: %d \n", strncmp(str4, str5, 3), strncmp(str5, str4, 3), strncmp(str4, str6, 3));
	printf("OWN:\nless: %d\ngreater: %d\nequal: %d\n", ft_strncmp(str4, str5, 3), ft_strncmp(str5, str4, 3), ft_strncmp(str4, str6, 3));
	printf("------------------------------------------------------\n");
	printf("******FT_MEMCHR:******\n");
	printf("ORIGINAL:\nIn: %s \nnot in: %s\n", memchr(s, h, 12), memchr(s, 'f', 12));
	printf("OWN:\nIn: %s \nnot in: %s\n", ft_memchr(s, h, 12), ft_memchr(s, 'f', 12));
	printf("------------------------------------------------------\n");
	printf("******FT_MEMCMP:******\n");
	char s7[20] = "BBBBB";
	char s8[20] = "CCCCC";
	printf("ORIGINAL:\nstr1 is less then str2: %d\n", memcmp(str4, s7, 5));
	printf("str2 is less then str1: %d\n", memcmp(s8, s7, 5));
	printf("equal: %d\n", memcmp(str4, str4, 5));
	printf("OWN:\nstr1 is less then str2: %d\n", ft_memcmp(str4, s7, 5));
	printf("str2 is less then str1: %d\n", ft_memcmp(s8, s7, 5));
	printf("equal: %d\n", ft_memcmp(str4, str4, 5));
	printf("------------------------------------------------------\n");
	printf("******FT_STRNSTR:******\n");
	char s1[20] = "Hello World!";
	char s2[20] = "lo";
	char s3[20] = "gu";
	char s4[5] = "";
	printf("ORIGINAL:\n in: %s\nout: %s\nempty: %s\n", strnstr(s1, s2, 12), strnstr(s1, s3, 12), strnstr(s1, s4, 12));
	printf("OWN:\n in: %s\nout: %s\nempty: %s\n", ft_strnstr(s1, s2, 12), ft_strnstr(s1, s3, 12), ft_strnstr(s1, s4, 12));
	printf("------------------------------------------------------\n");
	printf("******FT_ATOI:******\n");
	char g1[10] = "599 ";
	char g2[10] = "-4821";
	char g3[10] = "$/";
	printf("ORIGINAL:\npositive: %d\nout: %d \n", atoi(g1), atoi(g2));
	printf("OWN:\npositive: %d\nnegative: %d\nout: %d \n", ft_atoi(g1), ft_atoi(g2), ft_atoi(g3));
	printf("------------------------------------------------------\n");
	printf("*****FT_STRDUP:*****\n");
	printf("ORIGINAL: string: %s, duplicate: %s\n", s1, strdup(s1));
	printf("OWN: string: %s, duplicate: %s\n", s1, ft_strdup(s1));
	printf("------------------------------------------------------\n");
	printf("*****FT_SUBSTR:*****\n");
	printf("OWN: copy 5 letters of '%s' starting at index 4\n", s1);
	printf("result: %s\n", ft_substr(s1, 4, 5));
	printf("------------------------------------------------------\n");
	printf("*****FT_STRJOIN:*****\n");
	printf("OWN: connect '%s' and '%s': %s\n",str4, str5, ft_strjoin(str4, str5));
	printf("------------------------------------------------------\n");
	char gg[20] = "abchalabcloabc";
	char gf[10] = "abc";
	printf("*****FT_STRTRIM:*****\n");
	printf("OWN: cut '%s' from '%s': %s\n", gf, gg, ft_strtrim(gg, gf));
	printf("------------------------------------------------------\n");
}