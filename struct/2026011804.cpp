using namespace std;
#include<iostream>

typedef struct example
{
    string name;
    int height;
    int weight;
}EXAMPLE;

int main()
{
    typedef example EMP0;
    typedef struct example EMP1;
    EXAMPLE em0;
    EMP0 em1;
    EMP1 em2;

    em0.name="sss";
    em1.name="aaa";
    
    
    return 0;
}