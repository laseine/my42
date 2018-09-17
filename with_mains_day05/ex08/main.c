
#include <stdio.h>

char	*ft_strupcase(char *str);

int 	main(void)
{
	char str[255] = "Écrire une fonction qui met en majuscule chaque lettre de chaque mot.";

	*str = *ft_strupcase(str);
	printf("%s\n", str);
}