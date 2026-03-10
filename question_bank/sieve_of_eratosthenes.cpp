#include<bits/stdc++.h>
using namespace std;

vector<bool> sieve_of_eratosthenes(int begin,int end)
{
    vector<bool> isprime(end-begin+1,true);
    if(begin<2)
    {
        isprime.at(0)=isprime.at(1)=false;
        begin=2;
    }
    
    for(int p=begin;p*p<=end;p++)  //p:origin nums
    {
        if(isprime.at(p))
        {
            for(int i=p*p;i<=end;i++)  //i:marker
            {
                isprime.at(i)=false;
            }
        }
    }

    return isprime;
}

int main(void)
{
    vector<int> arr;
    int begin=0,end=30;
    /*for(int i=begin;i<=end;i++)
    {
        arr.push_back(i);
    }*/

    
    return 0;
}