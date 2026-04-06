#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int n=0;cin >> n;
    vector<int> arr(n);
    for(int &traverse:arr)
    {
        cin >> traverse;
    }

    sort(arr.begin(),arr.end(),[](int a,int b){return a<b;});

    for(int i=0;i<n;i++)
    {
        if(i==n-1)
        {
            cout << arr.at(i);
            break;
        }
        cout << arr.at(i) << ' ';
    }

    return 0;
}