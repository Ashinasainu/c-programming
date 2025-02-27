#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("enter number:");
    scanf("%d",&number);
    if(number%2==0)
    {
        printf("%d=even",number);
    }
    else
        printf("%d is odd",number);
    return 0;
}
