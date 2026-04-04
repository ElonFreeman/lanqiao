#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int num1=0x4D,num2=0x6F;//(77)DEC (1001101)BIN

    cout << ~num1   << ' ' << ~num2 << endl;
    cout << (num1 & num2) << endl;
    cout << (num1 | num2) << endl;
    cout << (num1 ^ num2) << endl;
    cout << ~(num1 ^ num2) << endl;

    return 0;
}