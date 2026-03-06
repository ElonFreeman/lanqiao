using namespace std;
#include<iostream>
#include<ctime>
#include<cstdlib>

void sort(int *arr)
{
    
}

int main()
{
    void sort(int *);
    int arr[20]={};
    srand(time(NULL));//初始化种子，否则会一直生成一样的随机数
    
    for(int i=0;i<20;i++)
    {
        *(arr+i)=rand() % 100 + 1;
        cout << *(arr+i) << " ";
    }
    cout << endl;

    sort(arr);

    return 0;
}