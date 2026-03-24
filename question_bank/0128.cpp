#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int n=0;
    cin >> n;
    int max=0;
    for(int num=1;num<=n;num++)
    {
        int tnum=num;
        while(tnum!=1 && tnum>num-1)
        {
            if(tnum%2==0)
            {
                tnum/=2;
                //cout << tnum << ' ';
            }
            else if(tnum%2!=0)
            {
                tnum=tnum*3+1;
                //cout << tnum << ' ';
            }
            if(tnum>max)
            {
                max=tnum;
            }
        }
        //cout << endl;
    }
    
    cout << max;

    return 0;
}