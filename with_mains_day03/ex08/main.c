#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char *str);

int main()
{
	char i[] = "  	-12 15 tesT";
	int resultat;
	char *mystr = i;

	resultat = ft_atoi(mystr);
	printf("String : $%s$", mystr);
	printf("\nRetour atoi C : $%d$", atoi(mystr));
	printf("\nRetour myatoi : $%d$\n", resultat);
}
