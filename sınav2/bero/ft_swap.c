void	ft_swap(int *a, int	*b)
{
	int	temp;
	
	temp = *a;
	*a = *b;
	*b = temp;

}

#include <stdio.h>
int	main()
{
	int x;
	int y;
	x = 31;
	y = 69;

	ft_swap(&x, &y);
	printf("%d %d", x, y);
}
