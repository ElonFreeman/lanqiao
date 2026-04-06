#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    string origin,last;
    cin >> origin >> last;
    int count=0;
    for(int i=0;i<origin.length();i++)
    {
        if(origin[i]!=last[i])
        {
            if(origin[i]=='*')
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