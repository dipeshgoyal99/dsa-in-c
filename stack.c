#include<stdio.h>
#include<stdlib.h>
#define MAX 4
int stack[MAX],item;
int choice,top=-1,count=0,status=0;
void push(int stack[],int item)
{
    if(top==(MAX-1))
    {
        printf(" stack is overflow");
    }
    else
    {
        stack[++top]=item;
        status++;
    }
}

int pop(int stack[])
{

    int val;
    if(top==-1)
    {
        printf(" stack is underflow");
    }
    else
    {
       val= stack[top--];
        status--;
        printf("\n %d pops element",val);
    }
    return val;
}


void peek(int stack[])
{

    int i;
    printf(" \n stack content are\n");
    if(top==-1)
    {
        printf(" stack is empty");
    }
    else
    {
       for(i=top;i>=0;i--)
       {
        printf("\n --\n |%d|",stack[i]);
        printf("\n");
       }
    
    }
}
   void main()
   {
     do
    {
        printf("1.push\n2.pop\n 3. display\n 4.exit");
        printf("\n Enter the Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                printf("enter the element to pused");
                scanf("%d",&item);
                push(stack,item);
                peek(stack);
                break;
            }
            case 2:
            {
                item=pop(stack);
               peek(stack);
                break;
            }
            case 3:
            {
                peek(stack);
                break;
            }
            case 4:
            {
                printf("\n\t EXIT POINT ");
                break;
            }
            default:
            {
                printf ("\n\t Please Enter a Valid Choice(1/2/3/4)");
            }
                
        }
    }
    while(choice!=4);

}
   

