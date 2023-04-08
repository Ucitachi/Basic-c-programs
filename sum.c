//sum of n natural even numbers
#include <stdio.h>

void main()
{
    int n,sum=0;
    printf("value of n:");
    scanf("%d",&n);//

    for(int i=1;i<=n;i++)
    { 
        //Problem statement
        if(i%2!=0)//If number not even skip it
        {
            continue;
        }
        sum=sum+i;
    }
    printf("%d",sum);//print answer
}
