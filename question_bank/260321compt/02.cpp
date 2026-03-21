#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int n=0,a=0,b=0;
    cin >> n >> a >> b;

    int total=0;
    if(a>=b)
    {
        total=(n+(a-b)*(n/b))/a;
    }
    else if(a<b)
    {
        total=(n+(b-a)*(n/a))/b;
    }
    cout << total;

    return 0;
}