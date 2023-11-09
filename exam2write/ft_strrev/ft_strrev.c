int	ft_strlen(char *str)
{
	int	i;

	i= 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return(i);
}

char *ft_strrev(char *str)
{
	int i;
	int len;
	char tmp;

	len = ft_strlen(str);
	i = 0;
	len--;
	while (len > i)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
		i++;
		len--;
	}
	return(str);
}

#include <stdio.h>

int main()
{
	char str[] = "mali baba";
	printf("%s",ft_strrev(str));
}
