#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int *arr;
};
int isEmpty(struct stack* ptr) {
    if(ptr->top == -1){
        return 1;
    }
    else {
        return 0;
    }
}
int isFull(struct stack* ptr) {
    if(ptr->top ==ptr-> size - 1){
        return 1;
    }
    else {
        return 0;
    }
}
int main()
{
  //  struct stack s;
    //s.size =80;
    //s.top = -1;
    //s.arr =(int*)malloc(s.size * sizeof(int));
     struct stack *s;
    s->size =6;
    s->top = -1;
    s->arr =(int*)malloc(s->size * sizeof(int));
    //pusing
    s->arr[0] =7;
    s->top++;
    s->arr[1] =17;
    s->top++;
    s->arr[2] =71;
    s->top++;
    s->arr[3] =72;
    s->top++;
    s->arr[4] =73;
    s->top++;
    s->arr[5] =74;
    s->top++;

    // cheak if stack is empty
    if(isEmpty(s)){
        printf("the stack is empty");
    }
    else{
        printf("the stack is full");
    }
    return 0;
}