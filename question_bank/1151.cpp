#include<bits/stdc++.h>
using namespace std;       

long long traildivision(long long num)  //basic tail divi
{
    vector<long long> factors;
    
    if(num%2==0)  //process even factor
    {
        factors.push_back(2);
        return factors.at(0);
    }

    for(size_t i=3;i<=num;i+=2)  //process odd factor
    {
        while(num%i==0)
        {
            factors.push_back(i);
            return factors.at(0);
        }
    }
}

int main(void)
{
    /*input dataset*/
    long int t=0;
    cin >> t;
    vector<long long> arr(t);
    for(size_t i=0;i<t;i++)
    {
        cin >> arr.at(i);
    }

    for(size_t i=0;i<t;i++)
    {
        long long sum=0;
        for(size_t j=2;j<=arr.at(i);j++)
        {
            sum+=traildivision(j);
        }
        cout << sum << endl;
    }

    return 0;
}