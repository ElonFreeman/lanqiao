#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int n,counter=0;cin >> n;
    vector<int> bottles(n+1);
    for(int i=1;i<n+1;i++)
    {
        cin >> bottles.at(i);
    }

    for(int i=1;i<n+1;i++)
    {
        /*检查当前位置的值与索引是否一致*/
        if(i!=bottles.at(i))
        {
            /*不一致则交换，将当前位置的值交换到它应该去的位置上，但是换过来的值也不一定合适*/
            swap(bottles.at(i),bottles.at(bottles.at(i)));
            counter++;  //计数器加一
            i--;  //索引器后退一格，因为换过来的值不一定合适，下一个循环仍要检查这个位置，直到合适为止
        }
    }

   
    cout << counter;
    

    return 0;
}