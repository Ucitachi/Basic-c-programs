#include<stdio.h>
#define STACK_SIZE 5
int stack[STACK_SIZE],choice,n,top,ele,i;

void push();
void pop();
void display();

int main()
{
    //clrscr()
    top=-1;
    printf("\n Stack operations using Array:");
    printf("\n------------------------------");
    printf("\n1.PUSH\n2.POP\n3.DISPLAY\n4,EXIT");
   
    
    do
    {
       printf("\nEnter your choice:");
       scanf("%d",&choice);
       switch(choice)
       {
       case 1:
       {
        push();
        break;
       }
       case 2:
       {
        pop();
        break;
        }
        case 3:
        {
        display();
        break;
        }
        case 4:
        {
         printf("\n\t EXIT POINT");
         break;
        }
        default:
        printf("\n\t please enter a valid choice(1/2/3/4)");
        
        }
        }while (choice!=4);
    return 0;
    

}

void push()
{
    if(top>=STACK_SIZE-1)
    {
        printf("\nStack Overflow\n");
    }
    else
    {
    printf("Enter the element to be inserted \n");
    scanf("%d",&ele);
    top++;
    stack[top]=ele;
}
}

void pop()
{
    if(top==-1)
    {
        printf("\nstack is underflow\n");
    }
    else
    {
      printf("The popped elements is %d",stack[top]);
      top--;
    }
}

    void display()
    {
        if(top==-1)
        {
            printf("\n\t The STACK is empty\n");
        }
        else
        {
            printf("\n The elements in STACK are \n");
            for(i=top;i>=0;i--)
            printf("\n%d",stack[i]);
        }
    }
