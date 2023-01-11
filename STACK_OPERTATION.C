#include<stdio.h>
#include<stdlib.h>


    struct s{
        int size;
        int top;
        int *arr;
    };
    
     int isFull(struct s *ptr){
      if(ptr->top==ptr->size-1){
        return 1;
      }
      
     
     else{
       
        return 0;
     }
     }

     int isEmpty(struct s *ptr){
        if(ptr->top==-1){
            return 1;
        }
        else{
            return 0;
        
        }
     }
     void push(struct s* ptr,int val){
        if(isFull(ptr)){
            printf("overflow");
            
        }
        else{
            int val = ptr->arr[ptr->top];
            ptr->top++;
        }
     } 
      void pop(struct s* ptr, int val){
        if(isEmpty(ptr)){
            printf("underflow");
        }
        else{
            ptr->top--;
            ptr->arr[ptr->top]=val;
        }
     } 
   int main()
   {
    int ch;
    struct s *sp =(struct s *) malloc(sizeof(struct s));
    sp->size=5;
     sp->top=-1;
     sp->arr=(int *)malloc(sp->size*sizeof(int));
     printf(" s created is sucess fully");
     printf(" \n 1. push");
     printf("\n 2. pop");
     printf("\n 3. display");
     printf("\n 4. exit");
     printf("\n enter the your choice");
     scanf("%d",&ch);
     do
    {
    
     switch(ch)
     {
        case 1:
        push()
        break;
        case 2:
        pop()
        break;
       // case 3:
        //peek()
        //break;
        case 4:
        
                printf("\n\t EXIT POINT ");
                break;
            
            default:
            {
                printf ("\n\t Please Enter a Valid Choice(1/2/3/4)");
            }
     }
    }
     while(ch!=4);
    return 0;


   printf("before push");
     printf("\n%d",isEmpty(sp));
     printf("\n%d",isFull(sp));
     push(sp,56);
      

     printf("\n after push");
      printf("\n%d",isEmpty(sp));
     printf("\n%d",isFull(sp));

   

    return 0;
}



/*
struct s *sp{
    s->size;
    s->top;
    s->*arr;
}

op1->push
struct s *sp;
sp->size=8;
sp->top=-1;
sp->arr=(int*)malloc(size->size*sizeof(int));
push()
if(isFull(sp)){
    printf("s overflow");
    else{
        sp->top++;
        sp->arr[sp->top]=val;


    }
}
pop()
if(isEmpty(sp)){
    printf(" s underflow");
    else
    {
        int val  = sp->arr[sp->top];
        sp->top=sptop-1;
        return val; 
        
    }
}
*/