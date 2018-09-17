#include <stdio.h>
#include <stdlib.h>

int		ft_sqrt(int nb);

int		main(int argc, char *argv[]) 
{
	int i;

	if (argc > 1)
	{
		i = atoi(argv[1]);
		printf("Racine carrée [%d] = %d\n", i, ft_sqrt(i));
	}
	else
	{
		printf("Il faut donner un nombre pour calculer sa racine carrée\n");
	}
}
