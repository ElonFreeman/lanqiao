#include<iostream>
using namespace std;

int main(void)
{
    string str;
    str.resize(100);

    cin >> str;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]=='/'&&str[i+1]=='/')
        {
            if(i==0)
            {
                cout << "null";
            }
            
            break;
        }
        cout << str[i];
    }

    return 0;
}