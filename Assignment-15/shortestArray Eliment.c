#include<stdio.h> 

void sortArray(int a[], int n)
{
	int i,j;
    for(i = 0; i<n; i++)
    {
        for(j = i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                int temp = a[j]; 
                a[j] = a[i]; 
                a[i] = temp; 
            }
        }
    }
}

int main()
{
    int size ,i;  
    printf("Enter Array size: "); 
    scanf("%d",&size); 

    int arr[size]; 

    printf("Enter %d Element in Array: \n",size); 
    for(i=0; i<size; i++)
    {
        printf("Enter %d Element: ",i+1); 
        scanf("%d",&arr[i]); 
    }

    sortArray(arr,size); 

    printf("\nAfter sorted element is: "); 
    for(i=0; i<size; i++)
        printf("%d ",arr[i]); 

    return 0; 
}
