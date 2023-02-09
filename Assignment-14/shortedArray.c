#include<stdio.h> 
int main()
{
    int arr[10],gSum ,i,j;   
    printf("Enter 10 number: \n"); 
    for(i=0; i<=9; i++)
    {
        printf("Enter %d number: ",i+1); 
        scanf("%d",&arr[i]); 
    }
    
    printf("\nBefore? sorted array: "); 
    for(i=0; i<=9; i++)
      printf("%d ",arr[i]); 

    for(i=0; i<=9; i++)
    {
        for(j=i+1; j<=9; j++)
        {
            if(arr[i]>arr[j])
            {
                int temp  = arr[i]; 
                arr[i] = arr[j]; 
                arr[j] = temp; 
            }
        }
    }

    printf("\nAfter sorted array: "); 
    for(i=0; i<=9; i++)
      printf("%d ",arr[i]); 


    return 0; 
}
 
