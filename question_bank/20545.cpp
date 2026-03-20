#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int N=0;
    cin >> N;
    vector<int> arr(N);
    for(int i=0;i<N;i++)
    {
        cin >> arr.at(i);
    }

    int flag=0;
    
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<1000;j++)
        {
            int sum=0;
            sum=j+j+1+j+2;
            if(sum==arr.at(i))
            {
                flag++;
            }
        }
        
    }

    cout << flag;

    return 0;
}