#include <stdio.h>

void	ft_sort_integer_table(int *tab, int size);

int main(void)
{
	int tableau[4];
	int i;

	tableau[0] = 10;
	tableau[1] = 30;
	tableau[2] = 24;
	tableau[3] = 2;

	printf("\nAvant : \n");
	for(i = 0; i < 4; i++)
	{
		printf("%d ", tableau[i]);
	}

	ft_sort_integer_table (tableau, 4);

	printf("\nAprès : \n");

	for(i = 0; i < 4; i++)
	{
		printf("%d ", tableau[i]);
	}

	return 0;
}
