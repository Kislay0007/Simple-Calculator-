#include<stdio.h>
int main()
{
    char oper;
    int a,b,c;
    printf("Enter the operator\n");
    scanf("%c",& oper);
    printf("Enter the operand a,b\n");
    scanf("%d%d",&a,&b);
    switch (oper)
    {
        case'+' : c=a+b;
        printf("The addition of two numbers = %d",c);
        break;
        case'-' : c=a-b;
        printf("The subtraction of two numbers = %d",c);
        break;
        case'*' : c=a*b;
        printf("The multiplication of two numbers = %d",c);
        break;
        case'/' : c=a/b;
        printf("The division of two numbers = %d",c);
        break;
        default:printf("Invalid operator");
    }
    return 0;
}