#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5][5],b[5][5],c[5][5],i,j,m,n;
    printf("enter order of matrix:\n");
    scanf("%d%d",&m,&n);


    printf("enter %d elements of first matrix:\n",m*n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }


    printf("enter %d elements of second matrix:\n",m*n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }


    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }

    printf("matrix A+B: \n");
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",c[i][j]);

        }
            printf("\n");
    }


    return 0;
}
