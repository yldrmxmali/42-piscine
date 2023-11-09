#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
#include <stdio.h>

int main()
{
	int a;
	int b;
	
	a = 13;
	b = 3;
	
	ft_swap(&a,&b);

	printf("%d %d", a ,b);
}

