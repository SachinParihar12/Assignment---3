#include<stdio.h> 

int greatestNum(int a[], int n)
{
    int sNum = a[0] ,i; 
    for(i = 1; i<n; i++)
    {
        if(sNum > a[i]) 
            sNum = a[i]; 
    }
    return sNum; 
}

int main()
{
    int size,sNumber; 
    printf("Enter Array size: "); 
    scanf("%d",&size); 

    int arr[size],i; 
    printf("Enter %d Element in Array: \n",size); 
    for(i=0; i<size; i++)
    {
        printf("Enter %d Element: ",i+1); 
        scanf("%d",&arr[i]); 
    }
    sNumber = greatestNum(arr,size); 
    printf("\nSmallest Number is: %d",sNumber); 

    return 0; 
}
