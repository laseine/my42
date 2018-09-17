#include <stdio.h>

char	*ft_strrev(char *str);

int main()
{
	char i[] = "aBcdE";
	char *origine;
	char *resultat;
	origine = i;
	resultat = i;
	resultat = ft_strrev(origine);
	printf("origine : %s$", "aBcdE");
	printf("\nResultat : %s$\n", resultat);
}
