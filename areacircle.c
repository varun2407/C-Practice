#include<stdio.h>
#include<math.h>

int main()
{
	 float  r,a;
	 printf("Enter the value of radius");
	 scanf("%f",&r);
	 a= (M_PI)*r*r;
	printf("The area of circle with radius%f is %f \n",r,a);
}
