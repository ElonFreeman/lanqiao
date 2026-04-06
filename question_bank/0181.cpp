#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    string numstr;
    cin >> numstr;

    int sum=0;
    for(int i=0;i<numstr.length();i++)
    {
        sum+=numstr[i]-48;
    }

    while (sum>=10)
    {
        int tmpsum=0;
        while(sum>0)
        {
            tmpsum+=sum%10;
            sum/=10;
        }
        sum=tmpsum;
    }

    cout << sum;
    
    return 0;
}