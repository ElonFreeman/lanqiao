#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int n=0;
    cin >> n;
    vector<int> cnt(n+1,0);  //n+1:the position begin at zero,but we only care the num that bigger than zero

    /*record the nums of a value*/
    for(int i=0;i<n*2;i++)
    {
        int x;
        cin >> x;
        if(x<=n)
        {
            cnt[x]++;
        }
    }

    /*count unmoving point and output,the same value can only have two unmoving value max*/
    int ans=0;
    for(int i=0;i<=n;i++)
    {
        ans+=min(cnt[i],2);
    }
    cout << ans << endl;
    
    return 0;
}