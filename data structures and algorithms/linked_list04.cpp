//在头部和尾部删除节点

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
    head=node1;

    node *node2=new node;
    node2->data=20;
    node1->next=node2;

    node *node3=new node;
    node3->data=30;
    node2->next=node3;

    node *node4=new node;
    node4->data=40;
    node3->next=node4;

    node *node5=new node;
    node5->data=50;
    node4->next=node5;

    node *node6=new node;
    node6->data=60;
    node5->next=node6;

    head=node2;
    delete node1;
    node5->next=nullptr;
    delete node6;

    node *current=head;
    while(current!=nullptr)
    {
        cout << current->data << endl;
        //cout << current->next << endl;
        current=current->next;
    }
    cout << endl;

    return 0;
}