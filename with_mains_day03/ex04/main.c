#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main()
{
	int i = 11;
	int j = 4;
	int k = i;
	int l = j;
	int *a = &i;
	int *b = &j;

	ft_ultimate_div_mod(a, b);
	
	printf("Quotient de (%d modulo %d) = %d", k , l, *a);
	printf("\nReste de (%d modulo %d) = %d\n", k, l, *b);
}
