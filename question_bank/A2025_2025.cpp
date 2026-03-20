#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int multi=1;
    for(int i=2025;i>0;i--)
    {
        multi*=i;
    }
    cout << multi;
    return 0;
}