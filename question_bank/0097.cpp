#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    long n=5,k=2;
    scanf_s("%d%d",&n,&k);
    vector<long> arr(n);
    for(long &num:arr)
    {
        cin >> num;
    }

    int flag=0;
    for(int head=0;head<n;head++)
    {
        for(int length=1;length<=(n-head);length++)//length of subsequence
        {
            int sum=0;
            for(int end=head;end<(head+length);end++)
            {
                sum+=arr.at(end);
            }
            if(sum%k==0)
            {
                flag++;
            }
            
        }
    }
    
    cout << flag;

    return 0;
}