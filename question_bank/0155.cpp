#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;cin >> n;
    vector<int> arr(n);
    for(int &input:arr)
    {
        cin >> input;
    }

    int max=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(abs(i-j)+abs(arr[i]-arr[j])>max)
            {
                max=abs(i-j)+abs(arr[i]-arr[j]);
            }
        }
    }

    cout << max;
    
    return 0;
}