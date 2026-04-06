#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    string origin,last;
    cin >> origin >> last;
    int count=0;
    for(int i=0;i<origin.length();i++)  
    {
        if(origin[i]!=last[i])  //贪心算法，比较源列与目标列，只要有不一样的就执行反转操作
        {
            if(origin[i]=='*')  //一次翻两个
            {
                origin[i]='o';
            }
            else
            {
                origin[i]='*';
            }

            if(origin[i+1]=='*')
            {
                origin[i+1]='o';
            }
            else
            {
                origin[i+1]='*';
            }

            count++;
        }
    }

    cout << count;

    return 0;
}