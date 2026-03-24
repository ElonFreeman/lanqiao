#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int n=0,k=0;
    cin >> n >> k;
    vector<vector<int>> choco(n,vector<int>(2));  /*0:H,1:W*/

    //cout << "input:" <<endl;
    for(int i=0;i<n;i++)
    {
        cin >> choco.at(i)[0] >> choco.at(i)[1];
    }

    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=choco.at(i)[0]*choco.at(i)[1];
    }

    int average=sum/k;
    int max=average;
    while((int)(sqrt(max)*10)%10!=0)
    {
        max--;
    }

    cout << (int)sqrt(max) << endl;
    
    return 0;
}