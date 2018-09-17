
#include <stdio.h>

char	*ft_strlowcase(char *str);

int 	main(void)
{
	char str[255] = "EXERCICE 9 : Écrire une fonction qui met en MINUSCULE chaque lettre de chaque mot.";

	*str = *ft_strlowcase(str);
	printf("%s\n", str);
}