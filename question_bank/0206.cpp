#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int lay;cin >> lay;

    int layc=lay;
    for(int i=1;i<=2*lay+1;i++)
    {
        if(i%2!=0)
        {
            for(int j=0;j<(layc*4-3);j++)
            {
                cout << '$';
            }
        }
        else if(i%2==0)
        {
            for(int j=0;j<(layc*4-5);j++)
            {
                cout << '.';
            }
        }
        cout <<endl;
        layc--;
    }
    return 0;
}