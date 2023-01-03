#include<stdio.h>
int area(float radius);

int main()
{
	float radius,r;
	printf("Enter radius\n");
	scanf("%f",&radius);
	r = area(radius);
	printf("area of circle is %f \n",r);
	return 0;
	
}

int area(float radius)
{
	return 3.14*radius*radius;
}
