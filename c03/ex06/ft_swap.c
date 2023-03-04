/*#include <stdio.h>*/

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 100;
	b = 50;
	printf("avant : %d, b : %d\n", a, b);
	ft_swap(&a, &b);
	printf("apres : %d, b : %d\n", a, b);
	return (0);
}
*/
