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
        int counter=1,nexti=0;
        for(int i=1;i<size(last);i++)  //process
        {
            
            if(last.at(i)==last.at(i-1))
            {
                counter++;
                continue;
            }
            
            else
            {
                next.push_back(counter+'0');
                next.push_back(last.at(i-1));
                //nexti+=2;

                counter=1;
                
            }
        }

        /*单独处理最后一段*/
        next.push_back(counter + '0');  //counter已累加完成
        next.push_back(last.back());  //输入最后的的数

        /*for(char traverse:next)
        {
            cout << traverse;
        }
        cout << endl;*/

        last.clear();
        last=next;
        next.clear();
    }

    for(char traverse:last)
    {
        cout << traverse;
    }    

    return 0;
}