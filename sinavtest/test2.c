#include <unistd.h>
int main(int argc, char **argv)
{
	int i;
	int c;

	c = 0;
	i = 0;
	if(argc == 2)
	{
		while(argv[1][i])
		{	
			while(argv[1][i] >= 'a' && argv[1][i] <= 'z'||argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				if(argv[1][i+1] == 32)
				{
					write(1,&argv[1][i],1);
					write(1,"\n",1);
					return(0);
				}
				write(1,&argv[1][i],1);
				i++;
			}
			i++;
		}
	}
}
