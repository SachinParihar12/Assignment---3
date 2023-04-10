#include<stdio.h> 

int greatestNum(int a[], int n)
{
    int gNum = a[0],i; 
    for(i = 1; i<n; i++)
    {
        if(gNum < a[i]) 
            gNum = a[i]; 
    }
    return gNum; 
}

int main()
{
    int size,gNumber; 
    printf("Enter Array size: "); 
    scanf("%d",&size); 

    int arr[size],i; 
    printf("Enter %d Element in Array: \n",size); 
    for(i=0; i<size; i++)
    {
        printf("Enter %d Element: ",i+1); 
        scanf("%d",&arr[i]); 
    }
    gNumber = greatestNum(arr,size); 
    printf("\nGreatest Number is: %d",gNumber); 

    return 0; 
}
