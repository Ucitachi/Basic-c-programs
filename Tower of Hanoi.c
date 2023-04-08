//Tower of Hanoi
#include<stdio.h>

int towers(int n,char A,char B,char C)//Tower function
{
 if(n==1)
{
    printf("Move disk 1 from %c to %c\n",A,C);
    return 0;
    
}
towers(n-1,A,C,B);
printf("Move disk %d from %c to %c\n",n,A,C);
towers(n-1,B,A,C);
return 0;
}

int main()
{
    int n;
    printf("Enter the number of disk\n");
    scanf("%d",&n);//Input no. of disks
    printf("The moves involved in tower of Hanoi are\n");
    towers(n,'A','B','C');//call tower function
    return 0;
}

