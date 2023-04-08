#include<stdio.h>

void main()
{
    float a,b,ans;//Variables declaration
    char op;

    printf("Enter the expression:");
    scanf("%f%c%f\n",&a,&op,&b);//Expression input

    switch(op)
    {
        case '+':ans=a+b;//Sum
                break;
        case '-':ans=a-b;//Difference
                break;
        case '*':ans=a*b;//Product
                 break;
        case '/':ans=a/b;//Division
                break;
        default:printf("Enter a valid operand.");
    }
    printf("ANS=%.2f.",ans);//Print answer
    
}
