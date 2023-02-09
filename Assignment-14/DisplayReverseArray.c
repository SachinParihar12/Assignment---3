#include<stdio.h> 
int main()
{
    int n=10 ,i; 
    printf("Enter the number: "); 
    scanf("%d",&n); 

    int arr[10]; 

    printf("Enter %d number: \n",n); 
    for(i=0; i<n; i++)
    {
        printf("Enter %d number: ",i+1); 
        scanf("%d",&arr[i]); 
    }
    
    printf("\nIn Noramal Order: "); 
    for(i=0; i<n; i++)
        printf("%d ",arr[i]); 
    
    printf("\nIn Reverse Order: "); 
    for(i=n-1; i>=0; i--)
        printf("%d ",arr[i]); 
    

    return 0; 
}
