#include <stdio.h>
#include <stdlib.h>

void rotate_left(int my_array[],int n)
{
    int i,first;
    first=my_array[0];
    for(i=0;i<n-1;i++)
    {
        my_array[i]=my_array[i+1];
    }
    my_array[n-1]=first;

    printf("Array after left rotation:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", my_array[i]);
    }
}


int main()
{   int n,i;
    printf("enter the array size:");
    scanf("%d",&n);
    int my_array[n];
    printf("enter the elements of array:\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&my_array[i]);
    }

     int N;
     printf("enter number of times to rotate left:");
     scanf("%d",&N);
     for(i=1;i<=N;i++)
     {
         rotate_left(my_array,n);
     }

     return 0;
}



