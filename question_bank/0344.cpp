#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    /*int n=0,q=0;  //n:num of books;q:num of readers
    scanf("%d %d",&n,&q);
    vector<int> codes(n),readers_code_len(q),readers_code(q);
    for(int &code:codes)
    {
        cin >> code;
    }
    for(int i=0;i<q;i++)
    {
        scanf("%d %d",&readers_code_len[i],&readers_code[i]);
    }*/

    int n=5,q=5;  //n:num of books;q:num of readers
    vector<int> codes={123456,6543,789654,126356,65487},
    readers_code_len={2,4,6,2,4},
    readers_code={56,6356,987654,89,5487};

    for(int reader=0;reader<q;reader++)
    {
        int flag=0,code=0;
        do
        {
            int tmp_code=codes.at(code);
            tmp_code=tmp_code%(int)pow(10,readers_code_len[reader]);
            if(readers_code.at(reader)==tmp_code)
            {
                flag=1;
                cout << codes.at(code) << endl;
            }

            code++;

        } while(code<n);

        if(flag==0)
        {
            cout << -1 << endl;
        }
    }    

    return 0;
}