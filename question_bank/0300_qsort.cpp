#include<bits/stdc++.h>
using namespace std;

int compare(const void *a,const void *b)
{
    int ia=*((const int*)a),ib=*((const int*)b);
    if(ia>ib)
        return 1;
    else if(ia<ib)
        return -1;
    else
        return 0;
}

int main(void)
{
    int n=0;cin >> n;
    vector<int> arr(n);
    for(int &traverse:arr)
    {
        cin >> traverse;
    }

    qsort(&arr,size(arr),sizeof(int),compare);

    for(int i=0;i<n;i++)
    {
        if(i==n-1)
        {
            cout << arr.at(i);
            break;
        }
        cout << arr.at(i) << ' ';
    }

    return 0;
}