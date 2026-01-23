using namespace std;
#include<iostream>

struct treenode
{
    int data;
    treenode *firstchild;
    treenode *nextsibling;
};

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

    return 0;
}