#include <stdio.h>

void ft_swap(int *a, int *b);

int main()
{
	int i = 0;
	int j = 9;
	int k = i;
	int l = j;
	int *a = &i;
	int *b = &j;
	
	ft_swap(a, b);
	
	printf("\nBefore swap : a = %d | b = %d", k , l);
	printf("\nAfter  swap : a = %d | b = %d\n", *a , *b);
}
