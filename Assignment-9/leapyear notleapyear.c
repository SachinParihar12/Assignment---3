#include<stdio.h>
int main()
{    
   int year = 2024;
   
   switch(year%100 == 0)
   {
   	  case 0 :
   	  	switch(year%4 == 0)
   	  	{
   	  		case 0 :
   	  			   printf("non leap year\n\n");
   	  			   break;
   	  		case 1 :
				   printf("leap year\n\n");
				   break;	   
			  } 
			  break;
		case 1:
		      switch(year%400 ==0)
			  break;	  
   	  	   
		
   	  	
			 
			 
   }




   return 0;
}
