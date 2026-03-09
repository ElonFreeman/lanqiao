#include<iostream>
using namespace std;

int main(void)
{
    int begin=0,end=0;
    scanf("%d %d",&begin,&end);

    int flag=0;
    for(int i=begin;i<=end;i++)
    {
        int tmp=i;
        while(i>0)
        {
            if(i%10==2)
            {
                flag++;
            }
            i/=10;
        }
        i=tmp;
    }

    cout << flag;

    return 0;
}