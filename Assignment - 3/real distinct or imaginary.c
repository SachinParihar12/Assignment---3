#include<stdio.h>
int main()
{
	double a , b , c, discriminant, root1, root2, realpart, imagpart;
	printf("Enter coefficients a, b and c \n");
	scanf("%f %f %f",&a, &b, &c);
	
	discriminant = b * b -4 * a * c;
	
	if(discriminant > 0){
		printf("Real and distinct \n");
	}
	
	else if(discriminant == 0){
		printf("Real and distinct \n");
	}
	else {
		printf("Real and distinct \n");
	}
	return 0;
}
