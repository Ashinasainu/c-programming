#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n,temp;
    printf("enter array length:");
    scanf("%d",&n);
    int array[10];
    printf("enter array elements:\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
          if(array[i]>array[j])
          {
              temp=array[i];
              array[i]=array[j];
              array[j]=temp;
          }
        }
    }

     printf("sorted array elements:");

    for(i=0;i<n;i++)
    {
        printf("%d",array[i]);
    }

    return 0;
}
