#include<bits/stdc++.h>
using namespace std;

void reverse(string *str_origin,string *str_last)
{
    for(int i=0;i<size(*str_origin);i++)
    {
        (*str_last)[i]=(*str_origin)[size(*str_origin)-1-i];
    }
}

void compare(string *str_origin,string *str_last)
{
    for(int i=0;i<size(*str_origin);i++)
    {
        if((*str_origin)[i]>(*str_last)[i])
        {
            cout << "left";
            return;
        }
        else if((*str_origin)[i]<(*str_last)[i])
        {
            cout << "right";
            return;
        }
        else
        {
            continue;
        }
    }

    cout << "equal";
    return;
}

int main(void)
{
    string str_origin,str_last;
    cin >> str_origin;

    (str_last).resize(size(str_origin));

    reverse(&str_origin,&str_last);
    compare(&str_origin,&str_last);

    return 0;
}