#include <stdio.h>

char	*ft_strcapitalize(char *str);

int 	main(void)
{
	char str[62] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un\0";
	printf("str : \"%s\"\n", str);
	printf(">>> : \"%s\"\n", ft_strcapitalize(str));
}
