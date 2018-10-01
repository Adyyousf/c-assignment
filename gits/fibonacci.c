#include <math.h>
#include <stdio.h>
int main()
{
	int a = 0, b = 1, c, num, count = 0;
	printf("Enter the value of num : \n");
	scanf("%d", &num);
	printf("First %d FIBONACCI numbers are :- \n", num);
	printf("%d\n", a);
	printf("%d\n", b);
	count = 2;
	while (count < num)
	{
		c = a + b;
		count++;
		printf("%d\n", c);
		a = b;
		b = c;
	}

}