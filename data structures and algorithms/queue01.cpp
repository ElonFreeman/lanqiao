//by linked list

using namespace std;
#include<iostream>

struct node
{
    int data;
    node *next;
};

int main()
{
    node *head=nullptr,*tail=nullptr;//队首、队尾

    node *n1=new node{1,nullptr},*n2=new node{2,nullptr},*n3=new node{3,nullptr},
    *n4=new node{4,nullptr},*n5=new node{5,nullptr},*n6=new node{6,nullptr};
    
    head=n1,tail=n6;
    n1->next=n2,n2->next=n3,n3->next=n4,n4->next=n5,n5->next=n6;

    node *tmp=head;
    while(tmp!=nullptr)
    {
        cout << tmp->data << " ";
        tmp=tmp->next;
    }
    cout << endl;

    //enqueue
    node *n7=new node{7,nullptr};
    tail->next=n7,tail=n7;

    //dequeue
    head=head->next;
    delete n1;

    //clean queue
    //node *current=head;
    while(head!=nullptr)
    {
        node *temp=head;
        head=head->next;
        delete temp;
    }

    //output 
    if(head==nullptr)
    {
        cout << "null" << endl;
        return 1;
    }
    else
    {
        tmp=head;
        while(tmp!=nullptr)
        {
            cout << tmp->data << " ";
            tmp=tmp->next;
        }
        cout << endl;
    }

    return 0;
}