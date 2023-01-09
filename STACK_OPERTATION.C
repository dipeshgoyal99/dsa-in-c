#include<stdio.h>
#include<stdlib.h>


    struct stack{
        int size;
        int top;
        int *arr;
    };
    
     int isFull(struct stack *ptr){
      if(ptr->top==ptr->size-1){
        return 1;
      }
      
     
     else{
       
        return 0;
     }
     }

     int isEmpty(struct stack *ptr){
        if(ptr->top==-1){
            return 1;
        }
        else{
            return 0;
        
        }
     }
     void push(struct stack* ptr,int val){
        if(isFull(ptr)){
            printf("overflow");
            
        }
        else{
            int val = ptr->arr[ptr->top];
            ptr->top--;
        }
     } 
      void pop(struct stack* ptr, int val){
        if(isEmpty(ptr)){
            printf("underflow");
        }
        else{
            ptr->top++;
            ptr->arr[ptr->top]=val;
        }
     } 
   int main(){
    struct stack *sp =(struct stack *) malloc(sizeof(struct stack));
    sp->size=5;
     sp->top=-1;
     sp->arr=(int *)malloc(sp->size*sizeof(int));
     printf(" stack created is sucess fully");
   printf("before push");
     printf("\n%d",isEmpty(sp));
     printf("\n%d",isFull(sp));
     push(sp,56);
      push(sp,6);
       push(sp,16);
        push(sp,46);
         push(sp,556);
          push(sp,66);
           push(sp,51);

     printf("\n after push");
      printf("\n%d",isEmpty(sp));
     printf("\n%d",isFull(sp));

   

    return 0;
}



/*
struct stack *sp{
    s->size;
    s->top;
    s->*arr;
}

op1->push
struct stack *sp;
sp->size=8;
sp->top=-1;
sp->arr=(int*)malloc(size->size*sizeof(int));
push()
if(isFull(sp)){
    printf("stack overflow");
    else{
        sp->top++;
        sp->arr[sp->top]=val;


    }
}
pop()
if(isEmpty(sp)){
    printf(" stack underflow");
    else
    {
        int val  = sp->arr[sp->top];
        sp->top=sptop-1;
        return val; 
        
    }
}
*/