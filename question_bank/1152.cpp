#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    long long n=0;
    cin >> n;
    vector<long long> arr(n);
    for(long long i=0;i<n;i++)
    {
        cin >> arr.at(i);
    }

    for(long long i=0;i<n;i++)
    {
        if(arr.at(i)==1)
        {
            cout << 0 << endl;
            continue;
        }
        if(arr.at(i)==2)
        {
            cout << 1 << endl;
            continue;
        }

        int flag=0;
        for(long long j=2;j<arr.at(i);j++)
        {
            if(arr.at(i)%j==0)
            {
                cout << 0 << endl;
                flag=1;
                break;
            }   
        }
        if(flag==0)
        {
            cout << 1 << endl;
        }
    }

    return 0;
}