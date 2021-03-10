#include<stdio.h>
#define STACK_MAX 100
typedef struct{
    int top;
    int data[STACK_MAX];
}Stack;
void push(Stack *s,int item)
{
    if(s->top<STACK_MAX)
    {
        s->data[s->top]=item;
        s->top=s->top+1;
    }
    else
    {
        printf("The Stack Is Full\n");
    }
}
int pop(Stack *s)
{
    int item;
    if(s->top==0)
    {
        return -1;
    }
    else
    {
        s->top=s->top-1;
        item=s->data[s->top];
    }
    return item;
}
int main()
{
    Stack my_stack;
    int item;
    my_stack.top=0;
    for(int i=1;i<=STACK_MAX;i++)
    {
    push(&my_stack,i);
    }
    for(int j=my_stack.top;j>0;j--)
    {
        if(pop(&my_stack)==-1)
        {
            printf("The Stack Is Empty\n");
        }
        else
        {
        printf("%d\n",pop(&my_stack));
        }
    }
}