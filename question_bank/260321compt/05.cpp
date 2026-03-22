#include <iostream>
#include <vector>
using namespace std;

int n;
char map[110][110];
int mx=0;//对角线长度
vector<int> ans(8);

void solve(int x,int y)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(map[i][j]=='#') //二级遍历：寻找最佳的对角点
            {
                /*二级遍历current与一级遍历进行x、y轴测距*/
                int dx=i-x,dy=j-y;

                /*测距合法性检测：x+dy<=0:遍历到当前位置;*/
                if(x+dy<=0||x+dy>n||y-dx<=0||y-dx>n||i+dy<=0||i+dy>n||j-dx<=0||j-dx>n)
                    continue;

                /*测距值合法，检查此二级遍历位置是否为#，并检查对角线长度是否大于上一种方案*/  //对角线长度用于判断面积是否最大
                if(map[x+dy][y-dx]=='#' && map[i+dy][j-dx]=='#' && dx*dx+dy*dy>mx)
                {
                    mx=dx*dx+dy*dy;//对角线长度，勾股
                    ans={x,y,x+dy,y-dx,i,j,i+dy,j-dx};//注入坐标
                }
            }
        }
    }
}

int main()
{
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>map[i][j];
        }
    }
    

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(map[i][j]=='#')
            {
                solve(i,j);
            }
        }
    }

    /*output positions*/
    for(int i=0;i<8;i+=2)
    {
        cout<<ans[i]<<" "<<ans[i+1]<<endl;
    }

    return 0;
}