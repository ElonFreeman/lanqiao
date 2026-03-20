#include<iostream>
#include<cmath>
using namespace std;

int main(void)
{
    int x=233,y=666;
    cout << round(sqrt(x*x+y*y)*(1+atan((double)y/x))) << endl;
    return 0;
}