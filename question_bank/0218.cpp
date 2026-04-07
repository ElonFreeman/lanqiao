#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;cin >> n;
    vector<int> arr_origin(n);
    for(int &input:arr_origin)
    {
        cin >> input;
    }

    int addcandy=0;

    int flag=1;
    while(flag==1)
    {
        flag=0;
        for(int num=0;num<n-1;num++)
        {
            if(arr_origin[num]!=arr_origin[num+1])
            {
                flag=1;
                break;
            }        
        }

        if(flag==1)
        {
            vector<int> arr_last=arr_origin;
            for(int i=0;i<n;i++)
            {
                arr_last[i]/=2;
                arr_last[i]+=arr_origin[(i+1+n)%n]/2;
            }

            arr_origin=arr_last;

            for(int i=0;i<n;i++)
            {
                if(arr_origin[i]%2!=0)
                {
                    arr_origin[i]++;
                    addcandy++;
                }
            }
        }
        
    }
    
    
    cout << addcandy;
    

    return 0;
}