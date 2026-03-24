#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    double year=0,summary=0;
    cin >> year >> summary;

    double origin=((summary-(year+1))/(pow(2,year+1)-1))+1;

    cout << origin;

    return 0;
}