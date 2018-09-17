#include <stdio.h>
//#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int main()
{
	char a[28] = "source avec 27 caractères.\0";
	char b[5] = "avec\0";
	char *found = NULL;

	printf("\n*str = \"%s\"", a);
	printf("\n*to_find = \"%s\"\n", b);
	
	found = ft_strstr(a, b);

	//#printf("\n%p\n", found);
	printf("\npointeur sur found, *found = \"%p\"\n\n", found);

	return (0);
}
