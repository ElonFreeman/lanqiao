#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int t; cin >> t;
    vector<string> strnum(t);
    for(string &input:strnum)
    {
        cin >> input;
    }
    
    for(int i=0;i<t;i++)
    {
        for(int j=0;j<size(strnum[i]);j++)
        {
            /*最高位进位*/
            if((strnum[i][j]-'0')>=5 && i==0)
            {
                cout << 1;
                for(int k=0;k<size(strnum[i]);k++)
                {
                    cout << 0;
                }
                break;
            }

            /*非最高位*/
            if((strnum[i][j]-'0')>=5)
            {
                for(int k=0;k<j-2;k++)
                {
                    cout << strnum[i][k];
                }
                cout << strnum[i][j-1]+1;

                for(int k=j;k<size(strnum[i]);k++)
                {
                    cout << '0';
                }
                cout << endl;
                break;
            }
        }
    }

    return 0;
}