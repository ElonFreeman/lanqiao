#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    vector<char> charset={'a','e','i','o','u'};
    string word;
    cin >> word;
    int section=0,v=0,c=0;


    for(int i=0;i<word.length();i++)
    {
        for(char letter:charset)
        {
            if(letter==word[i])
            {   
                c=0;
                if(v==0)
                {
                    section++;
                }
                v=1;
                break;
            }
            v=0;
        }

        if(v==0&&c==0)
        {
            section++;
            c=1;
        }
        
    }

    cout << section;

    return 0;
}