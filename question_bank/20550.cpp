#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    vector<int> arr(2025);
    for(int i=0;i<2025;i++)
    {
        arr.at(i)=i+1;
    }
    sort(arr.begin(),arr.end(),[](int a,int b){return a<b;});
    

    long long counter=0;
    do
    {
        for(int i=0;i<2025;i++)
        {
            for(int j=0;j<2025;j++)
            {
                if(counter%10==0)
                {
                    cout << endl;
                }
                if((arr.at(i)*arr.at(j))<=(i*j+2025))
                {
                    counter++;
                    cout << counter << ' ';
                }
            }
        }

    } while (next_permutation(arr.begin(),arr.end()));

    long long mod=pow(10,9)+7;
    cout << counter%mod;

    return 0;
}