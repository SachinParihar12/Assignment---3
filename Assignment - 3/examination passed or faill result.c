#include<stdio.h>
int main()
{
	float hindi,math,chemistry,physics,english ,total_marks ,percentage;
	
	printf("Enter the marks \n");
	scanf("%f%f%f%f%f",&hindi, &math, &chemistry, &physics, &english);
	
	total_marks = hindi + math + chemistry + physics + english;
	printf("totel marks %f \n",total_marks);
	
	percentage =(total_marks/500) * 100;
	printf("percentage is %f\n",percentage);
	
	if(percentage > 33)
	   printf("passed \n");
	
	else
	   printf("failed \n");
	
	
	
	return 0;
}
