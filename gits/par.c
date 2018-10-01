#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a = 1;
	int b = 1;
	int i;
	int c = 0;
	for (i = 0; i < 30; i = i + 1)
	{
		a = b;
		b = c;
		c = a+b;
		printf("%d\n", c);
	}
 
	return 0;
}
