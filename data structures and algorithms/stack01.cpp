//stack push&pop _linked list

using namespace std;
#include<iostream>

struct node
{
    int data;
    node *next;
};

int main()
{
    node *top=nullptr;
    
    //push
    node *n1=new node{1,nullptr};
    top=n1;

    node *n2=new node{2,nullptr};
    n2->next=n1;
    top=n2;

    node *n3=new node{3,nullptr};
    n3->next=n2;
    top=n3;

    node *tmp=top;
    while(tmp!=nullptr)
    {
        cout << tmp->data << " ";
        tmp=tmp->next;
    }
    cout << endl;

    //pop
    top=n2;
    delete n3;

    tmp=top;
    while(tmp!=nullptr)
    {
        cout << tmp->data << " ";
        tmp=tmp->next;
    }
    cout << endl;

    top=n1;
    delete n2;

    tmp=top;
    while(tmp!=nullptr)
    {
        cout << tmp->data << " ";
        tmp=tmp->next;
    }
    cout << endl;

    top=nullptr;
    delete n1;

    tmp=top;
    while(tmp!=nullptr)
    {
        cout << tmp->data << " ";
        tmp=tmp->next;
    }
    cout << endl;

    return 0;
}