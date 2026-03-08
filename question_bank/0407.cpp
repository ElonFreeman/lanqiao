#include<iostream>
using namespace std;

int main(void)
{
    int begin=0,end=0;
    scanf("%d %d",&begin,&end);

    int flag=0;
    for(int i=begin;i<=end;i++)
    {
        while(1)
        {
            if(i==0)
            {
                break;
            }
            if(i%10==2)
            {
                flag++;
            }
            i/=10;
        }
    }

    cout << flag;

    return 0;
}