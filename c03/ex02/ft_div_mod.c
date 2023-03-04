/*#include <stdio.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 51;
	b = 10;
	ft_div_mod(a, b, &div, &mod);
	printf("resultat = %d\n", div);
	printf("reste = %d\n", mod);
	return (0);
}
*/
