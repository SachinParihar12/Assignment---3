#include<stdio.h> 
int main()
{
    int size ,i ,j; 
    printf("Enter the number: "); 
    scanf("%d",&size); 

    int arr[size]; 

    printf("Enter %d number: \n",size); 
    for(i=0; i<size; i++)
    {
        printf("Enter %d number: ",i+1); 
        scanf("%d",&arr[i]); 
    }

    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if(arr[i]>arr[j])
            {
                int temp  = arr[i]; 
                arr[i] = arr[j]; 
                arr[j] = temp; 
            }
        }
    }

    printf("\nSecond largest element is: %d",arr[size-2]); 
  

    return 0; 
}
 
