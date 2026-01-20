//在头部和尾部插入节点

using namespace std;
#include<iostream>

struct node
{
    int data;
    node *next;
};

int main()
{
    node *head=nullptr;

    node *node1=new node;
    node1->data=10;
    node1->next=nullptr;
    head=node1;

    node *node2=new node;
    node2->data=20;
    node2->next=nullptr;
    node1->next=node2;

    node *node3=(node*)malloc(1*sizeof(node));
    node3->data=30;
    node3->next=nullptr;
    node2->next=node3;

    node *node4=new node;//头部插入
    node4->data=40;
    node4->next=nullptr;
    head=node4;
    node4->next=node1;

    node *node5=new node;//尾部插入
    node5->data=50;
    node5->next=nullptr;
    node3->next=node5;


    node *current=head;
    while(current!=nullptr)
    {
        cout << current->data << endl;
        current=current->next;
    }

    //清空链表
    node *dlt=head,*tmp=nullptr;
    while(dlt!=nullptr)
    {
        tmp=dlt->next;
        delete dlt;
        dlt=tmp;
    }
    head=nullptr;
    
    current=head;
    while(current!=nullptr)
    {
        cout << current->data << endl;
        current=current->next;
    }

    return 0;
}
