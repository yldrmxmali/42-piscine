int	ft_atoi(const char *str)
{
	int i;
	int sign;
	int result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == 32 || (str[i] <= 13 && str[i] >= 9 ))
		i++;
	while(str[i] == '-' || str[i] == '+')
	{	
		if (str[i] == '-')
	{	
		sign = -1;
	}
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (result * sign);
}
#include <stdio.h>
#include <stdlib.h>
int main()
{
	char *str = " +-1234aa24";
	printf("%d\n",ft_atoi(str));
	printf("%d",atoi(str));
}

