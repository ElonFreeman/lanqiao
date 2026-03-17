#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int n=0,q=0;  //n:num of books;q:num of readers
    scanf("%d %d",&n,&q);
    vector<int> codes(n),readers_code_len(q),readers_code(q);
    for(int &code:codes)
    {
        cin >> code;
    }
    for(int i=0;i<q;i++)
    {
        scanf("%d %d",&readers_code_len[i],&readers_code[i]);
    }



    return 0;
}