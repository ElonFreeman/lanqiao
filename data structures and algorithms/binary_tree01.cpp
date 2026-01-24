using namespace std;
#include<iostream>

struct treenode
{
    int data;
    treenode *firstchild;
    treenode *nextsibling;
};

void traverse(treenode *rootnode)
{
     if(rootnode==nullptr)
    {
        return;
    }
    
    cout << rootnode->data << " ";
    treenode *child=rootnode->firstchild;

    while(child!=nullptr)
    {
        traverse(child);
        child=child->nextsibling;
    }
}


int main()
{
    void traverse(treenode *);

    //treenode *rootnode=nullptr;
    treenode *n1=new treenode{1,nullptr,nullptr},*n2=new treenode{2,nullptr,nullptr},*n3=new treenode{3,nullptr,nullptr},
             *n4=new treenode{4,nullptr,nullptr},*n5=new treenode{5,nullptr,nullptr},*n6=new treenode{6,nullptr,nullptr},
             *n7=new treenode{7,nullptr,nullptr},*n8=new treenode{8,nullptr,nullptr},*n9=new treenode{9,nullptr,nullptr},
             *n10=new treenode{10,nullptr,nullptr},*n11=new treenode{11,nullptr,nullptr},*n12=new treenode{12,nullptr,nullptr},
             *n13=new treenode{13,nullptr,nullptr},*n14=new treenode{14,nullptr,nullptr},*n15=new treenode{15,nullptr,nullptr},
             *n16=new treenode{16,nullptr,nullptr},*n17=new treenode{17,nullptr,nullptr},*n18=new treenode{18,nullptr,nullptr};

    //2
    n2=n1->firstchild;
    n3=n2->nextsibling;


    //3
    n4=n2->firstchild;
    n5=n4->nextsibling;

    n6=n3->firstchild;
    n7=n6->nextsibling;


    //4
    n8=n4->firstchild;
    n9=n8->nextsibling;

    n10=n5->firstchild;
    n11=n10->nextsibling;

    n12=n6->firstchild;


    //5
    n13=n8->firstchild;

    n14=n9->firstchild;
    n15=n14->nextsibling;

    n16=n10->firstchild;
    n17=n16->nextsibling;

    n18=n12->firstchild;

    traverse(n1);

    return 0;
}