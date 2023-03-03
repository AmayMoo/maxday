/*#include <stdio.h>*/
#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		write(1, "N", 1);
	}
	else
	{
		write(1, "P", 1);
	}
}
/*
int	main()
{
	printf(" est avec n = -5");
	ft_is_negative(-5);
	printf("\n");
    
	printf(" est avec n = 0");
	ft_is_negative(0);
	printf("\n");
    
	printf(" est avec n = 10");
	ft_is_negative(10);
	printf("\n");
    
	return (0);
}
*/
