#include<stdio.h> 

void reverseArary(int arr[], int arrSize)
{
	int i;
    printf("\nReverse Order Array Display: "); 
    for(i=arrSize-1; i>=0; i--)
        printf("%d ",arr[i]); 
}

int main()
{
    int arrSize,i; 
    printf("How many number you want to enter: "); 
    scanf("%d",&arrSize);

    int arr[arrSize]; 

    printf("Enter %d Number: ",arrSize); 
    for(i=0; i<arrSize; i++)
        scanf("%d",&arr[i]); 

    reverseArary(arr,arrSize); 

    return 0; 
}
