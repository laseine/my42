#include <stdio.h>
#include <stdlib.h>

int		ft_atoi_base(char *str, char *base);

int		main()
{
	char 	*nombre = "-123\0";
	char 	*baseinitiale = "0123456789\0";
	int 	j;
	j = ft_atoi_base(nombre, baseinitiale);
	printf ("nombre %s dans baseinitiale %s : %d \n", nombre, baseinitiale, j);	

	return (0);
}
