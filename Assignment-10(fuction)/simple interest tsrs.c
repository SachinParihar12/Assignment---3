#include<stdio.h>
float simpleinterest(float p,float r,float t);
int main()
{
	float p,r,t;
	printf("Enter the p r t value\n");
	scanf("%f %f %f",&p , &r , &t);
    printf("simpleinterest is %.2f\n",simpleinterest (p,r,t));
	return 0;
}

float simpleinterest(float p,float r,float t)
{
	return (p*r*t) / 100.0;
}
