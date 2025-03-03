#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char strg[20];
    int i,length;
    int flag=0;
    printf("enter string:\n");
    scanf("%s",strg);
    length=strlen(strg);

    for(i=0;i<length;i++)
    {
        if(strg[i]!=strg[length-i-1])
        {
            flag=1;
            break;
        }
    }

    if(flag==1)
    {
        printf("%s is not a palindrome",strg);
    }
    else
    {
      printf("%s is a palindrome",strg);

    }

    return 0;
}
