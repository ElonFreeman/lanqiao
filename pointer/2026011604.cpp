using namespace std;
#include<iostream>

int main()
{
    //VLA
    int rows=3,clos=4;
    int arr0[rows][clos]={};


    int *parr1=(int *)malloc(4*sizeof(int));
    int *parr2=(int *)calloc(4,3*sizeof(int));
    //int *parr3=(int *)realloc();

    return 0;
}