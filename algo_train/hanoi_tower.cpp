#include<bits/stdc++.h>
using namespace std;

long long hanoi_recursive(int num)
{
    if(num==1)
    {
        return 1;
    }
    else
    {
        return 2*hanoi_recursive(num-1)+1;
    }
}

int main(void)
{
    int num_of_plates=10;
    long long times=hanoi_recursive(num_of_plates);
    
    cout << times;

    return 0;
}