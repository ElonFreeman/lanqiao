#include<bits/stdc++.h>
using namespace std;

void encrypt(string str)
{
    string str_enc;str_enc.resize(size(str));
    for(int i=0;str[i]!='\0';i++)
    {
        str_enc[i]=(((str[i]-96)+26+3)%26)+96;  //将字母转换成序号后加密然后再转换成字母
    }
    for(int i=0;i<size(str_enc);i++)
    {
        cout << str_enc[i];
    }
    

}

int main(void)
{
    string str;
    cin >> str;

    encrypt(str);

    return 0;
}