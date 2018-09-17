#include <stdio.h>
#include <stdlib.h>

int 	mafonction_g(int i)
{
	return (10 * i);
}

int		main(void)
{
	int tab[4] = {1,2,3,4};
	int *dTab;
	int k;

	int (*g)(int);						/*déclaration du pointeur sur fonction pour g*/

	g = mafonction_g;					/*Initialisation pour g*/
	
	dTab = ft_map(tab, 4, (*g)); 		/*Appel g*/
	
	k = 0;
	while (k < 4)
	{
      	printf("-g multiplie par 10 le contenu de la cellule %d\n", dTab[k]);
      	k++;
	}
	return(0);
}