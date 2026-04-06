#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int &input:arr)
    {
        cin >> input;
    }

    int length=1,tmplength=1;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]<arr[i+1])
        {
            length++;
        }
        else if(arr[i]>arr[i+1])
        {
            if(length>tmplength)
            {
                tmplength=length;
            }
            length=1;
        }
    }

    cout << tmplength;
    
    return 0;
}