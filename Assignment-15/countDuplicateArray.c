#include<stdio.h>

int countDupliElement(int arr[],int arrSize)
{
    int count=0 ,i ,j;  
    for(i=0; i<arrSize; i++)
    {
        for(j=i+1; j<arrSize; j++)
        {
            if(arr[i]<arr[j])
            {
                int temp = arr[i];  
                arr[i] = arr[j]; 
            arr[j] = temp; 
        }    }
    }
    for(i=1; i<arrSize; i++)
    {
        if(arr[i]==arr[i-1])
           count++; 
    }
    return count; 
}

int main()
{
    int arrSize ,i; 
    printf("Enter the number "); 
    scanf("%d",&arrSize);

    int arr[arrSize]; 

    printf("Enter %d Number: ",arrSize); 
    for(i=0; i<arrSize; i++)
        scanf("%d",&arr[i]); 

    printf("\nTotal Duplicate Value in Array: %d",countDupliElement(arr,arrSize)); 

    return 0; 
}
