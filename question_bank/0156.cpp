#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int row,col;cin >> row >> col;  //n:row,m:col
    int pr,pc;cin >> pr >> pc;

    vector<vector<int>> arr(row,vector<int>(col,0));
    
    int left=0,right=col-1,top=0,bottom=row-1;
    

    /*生成螺旋矩阵*/
    int num=1;
    while(left<=right && top<=bottom)
    {
        /*left->right*/
        for(int c=left;c<=right;c++)
        {
            arr[top][c]=num;
            num++;
        }
        top++;

        /*top->bottom*/
        for(int r=top;r<=bottom;r++)
        {
            arr[r][right]=num;
            num++;
        }
        right--;

        /*right->left*/
        if(left<=right)
        {
            for(int c=right;c>=left;c--)
            {
                arr[bottom][c]=num;
                num++;
            }
            bottom--;
        }

        /*bottom->top*/
        if(top<=bottom)
        {
            for(int r=bottom;r>=top;r--)
            {
                arr[r][left]=num;
                num++;
            }
            left++;
        }
    }

    cout << arr[pr-1][pc-1];
    /*for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }*/

    return 0;
}