#include <unistd.h>
#include <stdio.h>
int main()
{
	char a[] = "99";
	write(1,&a,2);
	a++;
	write(1,&a,3);
	return 0;
}
