#include <stdio.h>
#include <math.h>

//defining a function...
int prediction(int rollno)
{
	float marks[134]={6,7,8,9,10,8,7,9,5,3,0,0,5,8,7,6,10,7,8,7,6,6,0,9,5,9,5,9,0,5,8,8,2,3,4,0,8,7,6,6,2,7,7,7,5,4,6,1,0,8,7,3,8,1,1,5,6,9,5,7,8,9,9,3,5,3,5,6,0,0,7,4,5,9,5,4,8,6,5,2,0,7,6,3,5,6,6,10,9,0,10,9,8,7,9,5,0,7,0,5,8,0,7,4,9,3,8,4,10,6,0,6,0,3,0,0,0,0,0,0,0,0,0,2,8,6,4,6,8,0,5,0,5,7}; //marks in MST_1
	float attendence[134]={88.25,70.6, 53, 53, 67.65, 85.3, 73.5, 88.23, 82.4, 35.3, 55.88, 38.23, 97.1, 70.5, 67.6, 85.2,79.4,76.5,50.0,55.8,55.8,76.47,67.6,79.4,76.4,97.05,61.7,100,38.23,8.82,79.4,100,82.3,41.1,100,85.2,47.05,76.4,50,55.88,67.64, 76.5, 82.4, 64.7, 70.5, 50, 5.9, 41.2, 82.3, 88.2, 91.2, 50, 52.9, 55.88, 26.5, 50, 52.9, 85.2, 73.5, 94.11, 97, 82.3, 70.5, 100, 47, 44.11, 73.5, 67.6, 47, 41.1, 76.4, 41.1, 79.4, 41.1, 64.7, 73.5, 29.4, 76.4, 82., 64.7, 76.4, 82.3, 64.7, 76.4, 70.5, 67.6, 61.7, 85, 70, 70, 47, 67, 55, 70, 58, 44, 70, 61, 85, 76.4, 67.6, 58.8, 94.1,91.7, 64, 67, 70, 85.2, 91.7, 58.22, 94.1, 61.7, 61.7, 79.4, 79.4, 73.5}; //attendance percentage
	int max_marks = 10;
	int max_attendance = 100;
	float a, b, c;
	a = marks[rollno]/max_marks;
	b = attendence[rollno]/max_attendance;
	c =(a+b)/2;
	c = c * 10;
	printf("predicted score in next exam = \t %.1f\n",c);
	return 0;
}

int main()
{
	int rollno, branch;			
	printf("what is your branch: \n \t1. IT\n \t2. CSE");
	printf("\nplease choose a no. (1 or 2)\t");
	scanf("%d",&branch);
	if (branch >= 3)
	{
		printf("ERROR! Invalid Branch, PLease try again ");
		return(0);
	}

	printf("Enter your rollno:\t");
	scanf("%d",&rollno);
	if(branch==2 && rollno>=125)
	{
		printf("your rollno is not in CSE branch. Sorry!\n");	
		return(0);
	}

	if (branch==1 && rollno>=11)
	{
		printf("your rollno is not in IT branch. Sorry!\n");
		return(0);
	}

	{
		if(branch==2)
		{
			rollno=rollno-1;
		}
		else
		{
			rollno=rollno+123;
		}
	}

	{
	 	/*calling the 'prediction' function*/
	
	prediction(rollno);
	
	}
	
	return 0;
}
