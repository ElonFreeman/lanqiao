#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int n=0,k=0;
    cin >> n >> k;
    struct n_and_K
    {
        int h;
        int k;
    };
    n_and_K arr[n];
    for(n_and_K &traverse:arr)
    {
        cin >> traverse.h >> traverse.k;
    }
    
    return 0;
}