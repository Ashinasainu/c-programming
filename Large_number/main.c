#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int c;
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    printf("enter c:");
    scanf("%d",&c);

    if(a>b)
    {
      if(a>c)
      {
          printf("largest number is:%d",a);
      }
      else
      {
         printf("largest number is:%d",c);
      }
    }
    else if(b>c)
    {
      printf("largest number is:%d",b);

    }
    else
    {
     printf("largest number is:%d",c);
    }

    return 0;
}
