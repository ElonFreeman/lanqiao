#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(void)
{
    int n=0,x=0;
    scanf("%d%d",&n,&x);
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(),arr.end());

    int flagx=0,m=1,n=1;
    for(int i=0;i<(arr.end()-arr.begin());i++)
    {
        if(arr[i]==arr[i+1])
        {
            m++;
        }
        if(arr[i]!=arr[i+1])
        {
            n++;
        }
    }

    return 0;
}