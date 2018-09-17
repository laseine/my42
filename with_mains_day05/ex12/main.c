#include <stdio.h>

int	ft_str_is_numeric(char *str);

int 	main(void)
{
	char str1[3] = "42\0";
	printf("is numeric de \"%s\" ?\t\t%d\n", str1, ft_str_is_numeric(str1));
	char str2[4] = " 1\0";
	printf("is numeric de \"%s\" ?\t\t%d\n", str2, ft_str_is_numeric(str2));
	char str3[5] = "-2\0";
	printf("is numeric de \"%s\" ?\t\t%d\n", str3, ft_str_is_numeric(str3));
	char str4[11] = "000000,777\0";
	printf("is numeric de \"%s\"  ?\t%d\n", str4, ft_str_is_numeric(str4));
	char str5[] = "\0";
	printf("is numeric de \"%s\"  ?\t\t%d\n", str5, ft_str_is_numeric(str5));
	char str6[6] = "13a37\0";
	printf("is numeric de \"%s\"  ?\t%d\n", str6, ft_str_is_numeric(str6));
	char *s = NULL;
	printf("is numeric de \"%s\"  ?\t%d\n", s, ft_str_is_numeric(s));
}
