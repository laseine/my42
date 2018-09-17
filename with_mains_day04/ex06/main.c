#include <stdio.h>
#include <stdlib.h>

int		ft_is_prime(int nb);

int		main(int argc, char *argv[]) 
{
	int i;

	if (argc > 1)
	{
		i = atoi(argv[1]);
		printf("[%d] est-il premier (0 ou 1) ? Réponse : %d\n", i, ft_is_prime(i));
	}
	else
	{
		printf("Vous devez donner un nombre en argument pour vrifier s'il est premier\n");
	}
}