#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    long int t=0;
    cin >> t;

    vector<long long> arr(t);
    for(long int i=0;i<t;i++)
    {
        cin >> arr.at(i);
    }

    vector<int> primes;
    for(long int i=0;i<t;i++)//arr
    {
        for(long int prime=2;prime<sqrt(arr.at(i));prime++)//prime generator
        {
            /*check prime*/
            int flag=0;
            for(int i=2;i<prime;i++)
            {
                if(prime%i==0)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
            {
                continue;
            }
            if(arr.at(i)%prime==0)
            {
                primes.push_back(prime);
            }
        }
        int sum=0;
        for(int i=0;i<(primes.end()-primes.begin());i++)
        {
            sum+=primes.at(i);
        }
        cout << sum << endl;
        primes.clear();
    }

    return 0;
}