#include <stdio.h>
//#include <string.h>

void	*ft_strcpy(char *dest, char *src);

int main()
{
	char a[] = "le contenu source";
	char b[] = "quelconque !!!! ";

	printf("Avant");
	printf("\n*src = %s", a);
	printf("\n*dest = %s", b);

	ft_strcpy(b, a);
	
	printf("\nAprès");
	printf("\n*src = %s", a);
	printf("\n*dest = %s", b);
	return (0);
}
