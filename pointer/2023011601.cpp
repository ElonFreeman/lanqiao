#include<iostream>
using namespace std;

int main()
{
    int arr1[3]={1,2,13};
    int *parr=arr1;

    for(int i=0;i<3;i++)
    {
        cout << arr1[i] << endl;
    }
    cout << endl;
    for(int i=0;i<3;i++)
    {
        cout << *(arr1+i) << endl;
    }
    cout << endl;
    for(int i=0;i<3;i++)
    {
        cout << parr[i] << endl;
    }
    cout << endl;
    for(int i=0;i<3;i++)
    {
        cout << *(parr+i) << endl;
    }

    cout << endl;
    cout << endl;

    for(int i=0;i<3;i++)
    {
        cout << &arr1[i] << endl;
    }
    cout << endl;
    for(int i=0;i<3;i++)
    {
        cout << &(*(arr1+i)) << endl;
    }
    cout << endl;
    for(int i=0;i<3;i++)
    {
        cout << &parr[i] << endl;
    }
    cout << endl;
    for(int i=0;i<3;i++)
    {
        cout << &(*(parr+i)) << endl;
    }

    return 0;
}