#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int t=0;
    cin >> t;

    struct a_and_b
    {
        long long int a;
        long long int b;
    };
    vector<a_and_b> nums(t);
    for(a_and_b &input:nums)
    {
        cin >> input.a;
        cin >> input.b;
    }

    vector<long long int> sums(t);
    for(long long int traverse=0;traverse<size(sums);traverse++)
    {
        while(nums.at(traverse).b>0)
        {
            sums.at(traverse)+=((nums.at(traverse).b)%10)*nums.at(traverse).a;
            nums.at(traverse).b/=10;
        }
    }

    for(long long int traverse_sums:sums)
    {
        cout << traverse_sums << endl;
    }
    
    return 0;
}