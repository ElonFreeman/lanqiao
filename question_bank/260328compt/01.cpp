#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    vector<int> arr(3);
    for(int &num:arr)
    {
        cin >> num;
    }

    next_permutation(arr.begin(),arr.end());
    next_permutation(arr.begin(),arr.end());

    for(int i=0;i<3;i++)
    {
        if(i==2)
        {
            cout << arr.at(i);
            break;
        }
        cout << arr.at(i) << ' ';
    }

    return 0;
}