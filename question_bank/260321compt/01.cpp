#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int n=0;
    cin >> n;
    vector<int> arr(n);
    for(int &traverse:arr)
    {
        cin >> traverse;
    }

    int min=arr.at(0),max=arr.at(0);
    for(int i=0;i<size(arr);i++)
    {
        if(arr.at(i)>max)
        {
            max=arr.at(i);
        }
        if(arr.at(i)<min)
        {
            min=arr.at(i);
        }
    }

    int sub=max-min;
    cout << sub;

    return 0;
}