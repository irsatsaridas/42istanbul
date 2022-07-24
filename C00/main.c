#include <unistd.h>
#include <stdio.h>
int main()
{
	void ft_print_combn(int n);
	ft_print_combn(5);	
	return 0;
}
void ft_print_combn(int n)
{
	int log[10] = 0;
	int original_n = n;
	int a = 48;
	while(a < 58)
	{
		if(n > 0)
		{
			write(1,&a,1);
			a++;
			n--;
		}
		log
	}
	else
	{
		write(1,", ",2);
		n = original_n;
	}
}
