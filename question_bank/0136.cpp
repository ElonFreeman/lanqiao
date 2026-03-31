#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    string origin;
    int times;
    cin >> origin >> times;
    vector<char> last,next;
    for(int i=0;i<size(origin);i++)
    {
        last.push_back(origin.at(i));
    }

    for(int time=0;time<times;time++)
    {
        int counter=1,i=1;
        while(i<size(last))  //process
        {
            
            if(last.at(i)==last.at(i-1))
            {
                counter++;
                i++;
                continue;
            }
            
            next.push_back(counter+48);
            next.push_back(last.at(i-1));
            counter=1;
            i++;
            for(char traverse:next)
            {
                cout << traverse;
            }
            cout << endl;
        }

        last.clear();
        last=next;
        next.clear();
    }

    for(char traverse:next)
    {
        cout << traverse;
    }    

    return 0;
}