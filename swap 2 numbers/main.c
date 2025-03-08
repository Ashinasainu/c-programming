#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A=1;
    int B=2;
    int temp=A;
    A=B;B=temp;
    printf("A:%d\nB:%d",A,B);
    return 0;
}
