#include<bits/stdc++.h>
using namespace std;

vector<int> to_bin(int k)
{
    vector<int> bin;
    while(k>0)
    {
        bin.push_back(k%2);
        k/=2;
    }

    return bin;  /*Notice:the oder is reverse*/
}

int to_dec(vector<int> bin)
{
    int dec=0;
    for(size_t i=0;i<size(bin);i++)
    {
        dec+=bin.at(i)*pow(2,i);
    }

    return dec;
}

int main(void)
{
    vector<int> to_bin(int);
    int to_dec(vector<int>);

    int k=0;
    cin >> k;
    vector<int> bin_k=to_bin(k);  /*transfer to bin_k*/

    vector<int> bin_b;  /*build b*/
    for(size_t i=0;i<size(bin_k);i++)
    {
        bin_b.push_back(!bin_k.at(i));
    }

    vector<int> bin_a; /*build a*/
    for(size_t i=0;i<size(bin_b);i++)
    {
        if(bin_k.at(i))
        {
            bin_a.push_back(!bin_b.at(i));
        }
        else if(!bin_k.at(i))
        {
            bin_a.push_back(bin_b.at(i));
        }
    }

    int dec_a=to_dec(bin_a),dec_b=to_dec(bin_b);

    cout << dec_a << ' ' << dec_b;

    return 0;
}