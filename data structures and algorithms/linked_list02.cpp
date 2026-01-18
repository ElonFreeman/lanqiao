//双向链表

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
    struct headpointer hp,tp;
    hp.head=tp.head=nullptr;

    //定义一号节点
    struct node *node1;
    node1->data=10;
    node1->next=nullptr;

    //定义二号节点
    struct node *node2;
    node2->data=20;
    node2->next=nullptr;
    
    //定义三号节点
    struct node *node3;
    node3->data=20;
    node3->next=nullptr;
    
    //定义四号节点
    struct node *node4;
    node4->data=20;
    node4->next=nullptr;
    
   //正向链接
    hp.head=node1;
    node1->next=node2;
    node2->next=node3;
    node3->next=node4;
    node4->next=nullptr;

    //反向链接
    tp.head=node4;
    node4->next=node3;
    node3->next=node2;
    node2->next=node1;
    node1->next=nullptr;

    return 0;
}