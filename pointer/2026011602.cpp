using namespace std;
#include<iostream>


int main()
{
    int nums[6]={1,2,3,4,5,6};
    int *pnum1=NULL,*pnum2=NULL;

    pnum1=nums,pnum2=nums+2;//赋值
    cout << *(pnum1) << endl;//解引用
    cout << &pnum1 << endl;//指针寻址

    pnum1++;//指针自增
    cout << *(pnum1) << endl;
    pnum1--;//指针自减
    cout << *(pnum1) << endl;

    pnum1+=3;//偏移加
    cout << *(pnum1) << endl;
    pnum1-=1;//偏移减
    cout << *(pnum1) << endl;

    cout << (pnum2>pnum1) <<endl;//比较
    cout << pnum1-pnum2 << endl;//指针求差

    return 0;
}