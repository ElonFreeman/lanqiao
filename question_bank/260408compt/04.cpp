#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int n; cin >> n;
    vector<int> arr(n);
    for(int &input:arr)
    {
        cin >> input;
    }

    int length=n;
    int up=0,down=0;

    while(length>2)
    {
        for(int begin=0;begin<n-length;begin++)
        {
            for(int i=0;i<n-length;i++)
            {
                if(arr[i]>arr[i+1])
                {
                    down++;
                }
                if(arr[i]<arr[i+1])
                {
                    down++;
                }
            }
            if(up==1 && down==1)
            {
                cout << length;
                return 0;
            }
        }
        
        length--;
    }
    


    return 0;
}