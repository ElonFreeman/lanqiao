#include<bits/stdc++.h>
using namespace std;

/*void sieve_of_eratosthenes(int end)
{
    vector<bool> isprime(end+1,true);  //marker set intalized as true
    isprime.at(0)=isprime.at(1)=false;  //zero and one is not prime  
    
    for(int p=2;p*p<=end;p++)  //p:origin nums
    {
        if(isprime.at(p))  //not deleted nums that is prime
        {
            for(int i=p*p;i<=end;i+=p)  //i:multiples
            {
                isprime.at(i)=false;  //delete the multiples
            }
        }
    }

    for(int p=0;p<=end;p++)  //scan the nums and output
    {
        if(isprime.at(p))
        {
            cout << p << ' ';
        }
    }

    //return isprime;
}*/

long long traildivision(long long num)  //basic tail divi
{
    vector<long long> factors;
    
    while(num%2==0)  //process even factor
    {
        factors.push_back(2);
        num/=2;
    }

    for(int i=3;i<=sqrt(num);i+=2)  //process odd factor
    {
        while(num%i==0)
        {
            factors.push_back(i);
            num/=i;
        }
    }

    return factors.at(0);
}

int main(void)
{
    /*input dataset*/
    long int t=0;
    cin >> t;
    vector<long long> arr(t);
    for(long int i=0;i<t;i++)
    {
        cin >> arr.at(i);
    }

    for(long int i=0;i<t;i++)
    {
        long long sum=0;
        for(int j=2;j<=arr.at(i);j++)
        {
            sum+=traildivision(j);
        }
        cout << sum << endl;
    }

    return 0;
}