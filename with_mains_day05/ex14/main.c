#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int 	main(void)
{
	char str1[3] = "aB\0";
	printf("is uppercase de \"%s\" ?\t\t%d\n", str1, ft_str_is_uppercase(str1));
	char str2[4] = "cc\0";
	printf("is uppercase de \"%s\" ?\t\t%d\n", str2, ft_str_is_uppercase(str2));
	char str3[5] = "a.a.\0";
	printf("is uppercase de \"%s\" ?\t%d\n", str3, ft_str_is_uppercase(str3));
	char str4[11] = "ABCDEFGH\0";
	printf("is uppercase de \"%s\"  ?\t%d\n", str4, ft_str_is_uppercase(str4));
	char str6[6] = "abcd\0";
	printf("is uppercase de \"%s\"  ?\t%d\n", str6, ft_str_is_uppercase(str6));
	char str5[] = "\0";
	printf("is uppercase de \"%s\"  ?\t\t%d\n", str5, ft_str_is_uppercase(str5));
	char *s = NULL;
	printf("is uppercase de \"%s\"  ?\t%d\n", s, ft_str_is_uppercase(s));
}
