#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,factorial,i;
    printf("Enter number:");
    scanf("%d",&num);
    factorial=1;
    for(i=num;i>1;i--)
    {
        factorial=factorial*i;
    }
     printf("%d",factorial);
     return 0;
}



/*  using recursion
int fact(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}


int main()
{
    int n,Factorial;
    printf("Enter number:");
    scanf("%d", &n);
    Factorial=fact(n);
    printf("%d",Factorial);
}
*/
