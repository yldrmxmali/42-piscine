#include <unistd.h>
int say(char c)
{
	int i = c - 96;
	return(i);
}

int main(int argc, char **argv)
{
	int i;
	int x;

	i = 0;
	if(argc == 2)
	{
		while(argv[1][i])
		{
			x = say(argv[1][i]);
			while(x != 0)
			{
				write(1,&argv[1][i],1);
				x--;
			}
			i++;
		}
	}
	write(1,"\n",1);
}
