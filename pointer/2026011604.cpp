using namespace std;
#include<iostream>

//mem allocation
int main()
{
    //VLA
    int rows=0,clos=0;
    cin >> rows >> clos;
    int arr0[rows][clos]={};

    //1-D array
    int *parr1=(int *)malloc(4*sizeof(int));
    if(parr1==NULL)
    {
        cout << "failed" << endl;
        return 1;
    }
    for(int i=0;i<4;i++)
    {
        *(parr1+i)=i;
    }
    for(int i=0;i<4;i++)
    {
        cout << *(parr1+i) << " ";
    }
    cout << endl << endl;

    //2-D array
    int *parr2=(int *)calloc(4,5*sizeof(int));
    if(parr2==NULL)
    {
        cout << "failed" << endl;
        return 1;
    }
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<5;j++)
        {
            *(parr2+i*5+j)=i+j;
        }
    }
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout <<*(parr2+i*5+j) << " ";
        }
        cout << endl;
    }
    cout << endl;

    int *check=(int *)realloc(parr1,8*sizeof(int));
    if(check==NULL)
    {
        cout << "failed" << endl;
        return 1;
    }
    parr1=check;//更新旧指针的地址，若realloc进行了异地扩容，不更新地址就会出现未定义行为
    for(int i=4;i<8;i++)
    {
        *(parr1+i)=i;
    }
    for(int i=0;i<8;i++)
    {
        cout << *(parr1+i) << " ";
    }
    cout << endl << endl;

    return 0;
}