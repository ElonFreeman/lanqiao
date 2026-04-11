#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    long long n; cin >> n;
    vector<long long> gods(n);
    for(long long &input:gods)
    {
        cin >> input;
    }

    long long sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=gods[i];
    }

    sum=sum/(n-1);

    for(int i=0;i<n;i++)
    {
        if(i==n-1)
        {
            cout << sum-gods[i];break;
        }
        cout << sum-gods[i] << ' ';
    }

    return 0;
}