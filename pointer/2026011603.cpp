#include<iostream>
//using namespace std;

int main()
{
    int arr[4][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20}};

    //数组名指针索引
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<5;j++)
        {
            std::cout << *(arr[i]+j) << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
    
    //常规指针
    int *parr0=arr[0];
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<5;j++)
        {
            std::cout << *(parr0+i*5+j) << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

    //数组指针，[]中为数组容量
    int (*parr1)[5]=arr;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<5;j++)
        {
            std::cout << *(parr1[i]+j) << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

    //指针数组,四个指针分别指向数组的每一行
    int *parr2[4]={NULL};
    for(int i=0;i<4;i++)//初始化
    {
        parr2[i]=arr[i];
    }
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<5;j++)
        {
            std::cout << *(parr2[i]+j) << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

    //二级指针测试，二级指针指向一级指针的地址
    int **parr3=&parr0;
    parr0=arr[0];
    std::cout << *parr3 << std::endl;//一次解引用
    std::cout << **parr3 << std::endl;//二次解引用

    return 0;
}