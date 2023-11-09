void	ft_add(int *ptr, int x)
{
	x = 5;

	*ptr = *ptr + x;
	ptr = &x;

	return(ptr);
}
