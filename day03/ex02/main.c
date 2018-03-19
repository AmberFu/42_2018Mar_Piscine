#include <stdio.h>

void ft_swap(int *a, int *b);

int main()
{
	int a;
	int b;

	a = 3;
	b = 5;
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	ft_swap(&a, &b);
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	return (0);
}
