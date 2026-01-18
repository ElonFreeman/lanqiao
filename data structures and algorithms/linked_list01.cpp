//在中间插入节点

using namespace std;
#include<iostream>

//构建节点结构体
struct node
{
    int data;
    node *next;
};

int main()
{
    //定义并初始化头指针
    node *head=nullptr;

    //定义一号节点，并将上一个指针指向一号
    struct node *node1=new node;
    node1->data=10;
    node1->next=nullptr;
    head=node1;

    //定义二号节点，并将上一个指针指向二号
    struct node *node2=new node;
    node2->data=20;
    node2->next=nullptr;
    node1->next=node2;

    //定义三号节点，并将上一个指针指向二号
    struct node *node3=new node;
    node3->data=30;
    node3->next=nullptr;
    node2->next=node3;

    //定义四号节点，并将上一个指针指向二号
    struct node *node4=new node;
    node4->data=40;
    node4->next=nullptr;
    node3->next=node4;

    struct node *node5=new node;//插入节点
    node5->data=50;
    node5->next=nullptr;
    node2->next=node5;
    node5->next=node3;

    //遍历访问链表，并输出每个节点的数据域与指针域
    node *current=head;
    while(current!=nullptr)
    {
        cout << current->data << endl;
        cout << current->next << endl;
        current=current->next;
    }
    cout << endl;

    return 0;
}