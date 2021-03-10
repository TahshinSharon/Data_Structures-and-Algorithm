#include<iostream>
using namespace std;
typedef struct node Node;
struct node{
    int data;
    Node *next;
};
void insert(Node *node,int item)
{
    Node *new_node=create_node(item,node->next);
    node->next=new_node;
}
Node *append(Node *head,int item)
{
    Node *new_node=create_node(item,NULL);
    if(head==NULL)
    {
        return new_node;
    }
    Node *create_node=head;
    while(create_node!=NULL)
    {
        create_node=create_node->next;
    }
    create_node->=new_node;
    return head;
}
Node *prepend(Node *head,int item)
{
    Node *new_node=create_node(item,head);
    return head;
}
Node *create_node(int item,Node *next)
{
    Node *new_node=(Node *)malloc(sizeof(Node));
    if(new_node==NULL)
    {
        printf("Error! Could Not Create A New_Node\n");
        exit(1);
    }
    new_node->data=item;
    new_node->next=next;
    return new_node;
}
Node *remove(Node *head,Node *node)
{
    if(node==head)
    {
        head=node->next;
        free(node);
        return head;
    }
    Node *current_node=head;
    while(current_node!=NULL)
    {
        if(current_node->next==node)
        {
            break;
        }
        current_node=current_node->next;
    }
    if(current_node==NULL)
    {
        return head;
    }
    current_node->next=node->next;
    free(node);
    return head;
}
int main()
{
    Node *n;
    n=create_node(10, NULL);
    head=prepend(head,item);
    printf("%d\n",n->data);
    return 0;
}