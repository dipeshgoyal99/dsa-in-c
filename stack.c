#include<stdio.h>
#include<stdlib.h>
#define MAX 4
int s[MAX],item;
int choice,top=-1,count=0,status=0;
void push(int s[],int item)
{
    if(top==(MAX-1))
    {
        printf(" s is overflow");
    }
    else
    {
        s[++top]=item;
        status++;
    }
}

int pop(int s[])
{

    int val;
    if(top==-1)
    {
        printf(" s is underflow");
    }
    else
    {
       val= s[top--];
        status--;
        printf("\n %d pops element",val);
    }
    return val;
}


void peek(int s[])
{

    int i;
    printf(" \n s content are\n");
    if(top==-1)
    {
        printf(" s is empty");
    }
    else
    {
       for(i=top;i>=0;i--)
       {
        printf("\n --\n |%d|",s[i]);
        printf("\n");
       }
    
    }
}
   int main()
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
                push(s,item);
                peek(s);
                break;
            }
            case 2:
            {
                item=pop(s);
               peek(s);
                break;
            }
            case 3:
            {
                peek(s);
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
return 0;
}
   

