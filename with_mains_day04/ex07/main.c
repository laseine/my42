#include <stdio.h>
#include <stdlib.h>

int		ft_find_next_prime(int nb);

int		main(int argc, char *argv[]) 
{
	int i;

	if (argc > 1)
	{
		i = atoi(argv[1]);
		printf("Le nombre premier immédiatement supérieur ou égal à %d est : %d\n", i, ft_find_next_prime(i));
	}
	else
	{
		printf("Vous devez donner un nombre en argument pour trouver le prochain nombre premier\n");
	}
}