#include <stdio.h>
#include <stdlib.h>

int binarytodecimel(int number)
{
    int last_digit=0,temp=0;
    int base=1;
    int decimel_value=0;
    temp=number;

    while(temp>0)
    {
        last_digit=temp%10;
        temp=temp/10;
        decimel_value=decimel_value+(last_digit*base);
        base=base*2;
    }
    return decimel_value;
}

int main()
{
    int decimel=0,num=0;
    printf("Enter the number:");
    scanf("%d",&num);
    decimel=binarytodecimel(num);
    printf("%d",decimel);

}
