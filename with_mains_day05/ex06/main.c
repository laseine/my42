#include <stdio.h>
//#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int		main(void)
{
	char s1[4] = "acz\0";
	char s2[6] = "adkfc\0";

	printf("Résultat : %d \n", ft_strcmp(s1, s2));

	return (0);
}
