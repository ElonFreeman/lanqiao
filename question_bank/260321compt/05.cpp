#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int n=0;
    cin >> n;
    vector<string> square_origin(n);
    for(int row=0;row<n;row++)
    {
        cin >> square_origin[row];
    }

    /*record '#' position,[0]is row,[1]is col*/
    vector<vector<int>> position(2,vector<int>());
    for(int row=0;row<n;row++)
    {
        for(int col=0;col<n;col++)
        {
            if(square_origin[row][col]=='#')
            {
                position[0].push_back(row);
                position[1].push_back(col);
            }
        }
    }

    

    return 0;
}