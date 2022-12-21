#include<stdio.h>
int main()
{
	float cost_price,selling_price;
	printf("Enter is cost_price and selling_price\n");
	scanf("%f%f\n",&cost_price,&selling_price);
	float total_selling = selling_price - cost_price;
	printf("total_selling \n");

	if(total_selling > 0){
	
	   printf("profit is percentage %f  \n",(total_selling * 100) / cost_price);}
	
	else {
	
	   printf("loss is percentage %f \n",(total_selling * 100 )/ cost_price);}
	if(total_selling == 0){
		printf("cost_price or selling_price equal is percentage %f \n",(total_selling * 100)/cost_price);
	}  
	   
	   
	   


	return 0;
}
