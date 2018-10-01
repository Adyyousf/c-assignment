#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    int count;
    printf("Enter a no:  ");

    scanf("%d", &a);

    if (a < 0)
    {
    	/* code */
    	printf("You Entered %d\n its a negative integer\n", a );
    }
    else
    {
    printf("The no. you Entered is: %d\n its a positive integer\n", a);
    }
   count = a;
  while( a > 0 ) {
  	printf("The double of the no. is : %d\n", a );
  	a = 2*count;	
  }
}
