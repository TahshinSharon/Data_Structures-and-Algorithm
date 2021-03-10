#include<stdio.h>
#define Q_SIZE 5
typedef struct{
    int data[Q_SIZE];
    int head,tail;
}Queue;
void enqueue(Queue *q,int item)
{
    if((q->tail+1)%(Q_SIZE+1)==q->head)
    {
        printf("The Queue Is Full\n");
        return;
    }
    q->data[q->tail]=item;
    q->tail=(q->tail+1)%(Q_SIZE+1);
}
int dequeue(Queue *q)
{
    int item;
    if(q->tail==q->head)
    {
        printf("The Queue Is Empty\n");
        return -1;
    }
    else
    {
        item=q->data[q->head];
        q->head=(q->head+1)%(Q_SIZE+1);
    }
    return item;
    
}
int main()
{
    Queue my_q;
    int item;
    my_q.head=0;
    my_q.tail=0;
    enqueue(&my_q,1);
    printf("Tail=%d\n",my_q.tail);
    enqueue(&my_q,2);
    printf("Tail=%d\n",my_q.tail);
    enqueue(&my_q,3);
    printf("Tail=%d\n",my_q.tail);
    printf("Beginning Head Is=%d\n",my_q.head);
    item=dequeue(&my_q);
    printf("item=%d Head Is=%d\n",item,my_q.head);
    item=dequeue(&my_q);
    printf("item=%d Head Is=%d\n",item,my_q.head);
    item=dequeue(&my_q);
    printf("item=%d Head Is=%d Tail Is=%d\n",item,my_q.head,my_q.tail);
    item=dequeue(&my_q);
    printf("item=%d Head Is=%d Tail Is=%d\n",item,my_q.head,my_q.tail);
    

}