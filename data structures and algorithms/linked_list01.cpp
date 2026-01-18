//单向链表

using namespace std;
#include<iostream>

//构建节点结构体
struct node
{
    int data;
    node *next;
};

//构建头指针结构体
struct headpointer
{
    node *head;
};

int main()
{
    //定义并初始化头指针
    struct headpointer hp;
    hp.head=nullptr;

    //定义一号节点，并将上一个指针指向一号
    struct node *node1;
    node1->data=10;
    node1->next=nullptr;
    hp.head=node1;

    //定义二号节点，并将上一个指针指向二号
    struct node *node2;
    node2->data=20;
    node2->next=nullptr;
    node1->next=node2;

    //定义三号节点，并将上一个指针指向二号
    struct node *node3;
    node3->data=20;
    node3->next=nullptr;
    node2->next=node3;

    //定义四号节点，并将上一个指针指向二号
    struct node *node4;
    node4->data=20;
    node4->next=nullptr;
    node3->next=node4;

    

    return 0;
}