#include <unistd.h>

int ft_strlen(char *str)
{
	int i;
	
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char *ft_rev_print(char *str)
{
	int len;

	len = ft_strlen(str) - 1;
	while (len >= 0)
	{
		write(1, &str[len], 1);
		len--;
	}
	write(1,"\n",1);
	return(str);
}

#include <stdio.h>
int main()
{
	char str[] = "mali baba";
	ft_rev_print(str);
}
