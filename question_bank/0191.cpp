#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int end;cin >> end;

    int sum=0;
    for(int num=1;num<=end;num++)
    {
        int tnum=num;
        while(tnum>0)
        {
            if(tnum%10==2 || tnum%10==0 || tnum%10==1 || tnum%10==9)
            {
                sum+=num;
                break;
            }
            tnum/=10;
        }
    }

    cout << sum;

    return 0;
}