#include <stdio.h>

int		ft_recursive_power(int nb, int power);

int 	main()
{
	int z = 0;
	int u = 1;
	int d = 2;
	int x = 10;
	int t = 13;
	int c = 100; 

	printf("- %i ^ %i = %i\n", z, z, ft_recursive_power(z, z));
	printf("- %i ^ %i = %i\n", z, c, ft_recursive_power(z, u));
	printf("- %i ^ %i = %i\n", c, z, ft_recursive_power(c, z));
	printf("- %i ^ %i = %i\n", c, u, ft_recursive_power(c, u));
	printf("- %i ^ %i = %i\n", d, t, ft_recursive_power(d, t));
	printf("- %i ^ %i = %i\n", x, d, ft_recursive_power(x, d));
	printf("- %i ^ %i = %i\n", t, d, ft_recursive_power(t, d));
	return (0);
}
