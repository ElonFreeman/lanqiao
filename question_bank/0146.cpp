#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n=0;
    cin >> n;
    vector<int> arr(n);
    for(int &num:arr)
    {
        cin >> num;
    }

    int flag_lr=0;
    for(int center=1;center<n-1;center++)
    {
        int bingo_left=0,bingo_right=0;
        for(int left=center-1;left>=0;left--)
        {
            if(arr.at(left)<arr.at(center))
            {
                bingo_left=1;
            }
        }
        for(int right=center+1;right<n;right++)
        {
            if(arr.at(right)>arr.at(center))
            {
                bingo_right=1;
            }
        }
        if(bingo_left==1&&bingo_right==1)
        {
            flag_lr++;
        }
    }

    cout << flag_lr;
    
    return 0;
}