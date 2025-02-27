#include <stdio.h>
#include <stdlib.h>

float calculator(float num1,float num2,char op)
{
    float result;
    switch(op)
    {
    case '+':
        result=num1+num2;
        break;
    case '-':
        result=num1-num2;
        break;
    case '*':
         result=num1*num2;
        break;
    case '/':
        result=num1/num2;
        break;
    }

        return result;
}

int main()
{
    char op;
    float num1;
    float num2;
    float Result;
    printf("Enter operator(+,-,*,/):");
    scanf("%c",&op);
    printf("Enter first operant:");
    scanf("%f",&num1);
    printf("Enter second operant:");
    scanf("%f",&num2);
    Result=calculator(num1,num2,op);
    printf("%.2f%c%.2f=%.2f",num1,op,num2,Result);

}
