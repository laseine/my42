#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int main()
{
	int div = 0;
	int mod = 0;
	int a = 11;
	int b = 4;

	ft_div_mod(a, b, &div, &mod);
	
	printf("Quotient de (%d modulo %d) = %d", a , b, div);
	printf("\nReste de (%d modulo %d) = %d\n", a, b, mod);
	
	return 0;
}
