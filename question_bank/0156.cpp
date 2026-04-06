#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int n,m;cin >> n >> m;  //n:row,m:col
    //int r,c;cin >> r >> c;

    vector<vector<int>> arr(n,vector<int>(m,0));
    
    int row=0,col=0;
    for(int i=1;i<=n*m;i++)
    {
        if(col==m) col--;
        if(col==-1) col++;
        if(row==n) row--;
        if(row==-1) row++;

        if(col<m && row==0)
        {
            arr[row][col]=i;
            col++;
        }
        else if(col==m-1 && row<n)
        {
            arr[row][col]=i;
            row++;
        }
        else if(col>0 && row==n-1)
        {
            arr[row][col]=i;
            col--;
        }
        else if(col==0 && row>0)
        {
            arr[row][col]=i;
            row--;
        }
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout << arr[i][j];
        }
    }

    return 0;
}