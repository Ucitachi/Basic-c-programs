#include<stdio.h>

void main()
{
    float a,b,ans;
    char op;

    printf("Enter the expression:");
    scanf("%f%c%f\n",&a,&op,&b);

    switch(op)
    {
        case '+':ans=a+b;
                break;
        case '-':ans=a-b;
                break;
        case '*':ans=a*b;
                 break;
        case '/':ans=a/b;
                break;
        default:printf("Enter a valid operand.");
    }
    printf("ANS=%.2f.",ans);
    
}