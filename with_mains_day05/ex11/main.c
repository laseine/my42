#include <stdio.h>

int	ft_str_is_alpha(char *str);

int 	main(void)
{
	char str1[4] = "42\0";
	printf("is alpha de \"%s\" ?\t\t%d\n", str1, ft_str_is_alpha(str1));
	char str2[4] = "aB\0";
	printf("is alpha de \"%s\" ?\t\t%d\n", str2, ft_str_is_alpha(str2));
	char str3[5] = "a B\0";
	printf("is alpha de \"%s\" ?\t\t%d\n", str3, ft_str_is_alpha(str3));
	char str4[11] = "Boeing 777\0";
	printf("is alpha de \"%s\"  ?\t%d\n", str4, ft_str_is_alpha(str4));
	char str5[] = "\0";
	printf("is alpha de \"%s\"  ?\t\t%d\n", str5, ft_str_is_alpha(str5));
	char *s = NULL;
	printf("is alpha de \"%s\"  ?\t\t%d\n", s, ft_str_is_alpha(s));
}
