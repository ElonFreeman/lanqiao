#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int n=0;
    cin >> n;
    vector<int> arr(n+1);
    for(int &traverse:arr)
    {
        cin >> traverse;
    }

    for(size_t i=0,j=n;i<size(arr);i++,j--)
    {
        if(arr.at(i)>0)
        {
            if()
            {

            }
            if()
            {
                
            }
            cout << '+' << arr.at(i) << "x^" << j;
        }
            
        else if(arr.at(i)==0)
            continue;
        else if(arr.at(i)<0)
        {
            cout << arr.at(i) << "x^" << j;
        }
            
    }

    return 0;
}