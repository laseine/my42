#include <stdio.h>

int		ft_iterative_power(int nb, int power);

int 	main()
{
	int z = 0;
	int u = 1;
	int d = 2;
	int x = 10;
	int t = 13;
	int c = 100; 

	printf("- %i ^ %i = %i\n", z, z, ft_iterative_power(z, z));
	printf("- %i ^ %i = %i\n", z, c, ft_iterative_power(z, u));
	printf("- %i ^ %i = %i\n", c, z, ft_iterative_power(c, z));
	printf("- %i ^ %i = %i\n", c, u, ft_iterative_power(c, u));
	printf("- %i ^ %i = %i\n", d, t, ft_iterative_power(d, t));
	printf("- %i ^ %i = %i\n", x, d, ft_iterative_power(x, d));
	printf("- %i ^ %i = %i\n", t, d, ft_iterative_power(t, d));
	return (0);
}
