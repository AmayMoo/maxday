/*#include <stdio.h>
#include <stdlib.h>*/

int	ft_atoi(char *str)
{
	int	stock;
	int	result;
	int	i;

	stock = 1;
	result = 0;
	i = 0;
	while (str[i] == ' ')
	{
		i++;
	}
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			stock = -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (stock * result);
}
/*
int	main(void)
{
	char	str1[] = "12345";
	char	str2[] = "-98765";
	char	str3[] = "  +42";
	char	str4[] = "  123 456  ";
	char	str5[] = "12345abc";

	printf("-----ft_atoi-----\n"); 
	printf("%d\n", ft_atoi(str1));
	printf("%d\n", ft_atoi(str2));
	printf("%d\n", ft_atoi(str3));
	printf("%d\n", ft_atoi(str4));
	printf("%d\n", ft_atoi(str5));
	printf("-----atoi-----\n");
	printf("%d\n", atoi(str1));
	printf("%d\n", atoi(str2));
	printf("%d\n", atoi(str3));
	printf("%d\n", atoi(str4));
	printf("%d\n", atoi(str5));
	return (0);
}
*/
