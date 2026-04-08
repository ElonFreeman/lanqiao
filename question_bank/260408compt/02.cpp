#include<bits/stdc++.h>
using namespace std;

void add(vector<int> numa,vector<int> numb)
{
    int max,min;
    if(size(numa)>=size(numb))
    {
        max=size(numa);
        min=size(numb);
        numb.resize(size(numa));
    }
    else
    {
        max=size(numb);
        min=size(numa);
        numa.resize(size(numb));
    }

    vector<int> numc(max+1,0);
    for(int i=0;i<max;i++)
    {
        numc[i]+=(numa[i]+numb[i]);
        if((numc[i])>=10)
        {
            numc[i+1]=numc[i]/10;
            numc[i]%=10;
        }
    }

    int flag=0;
    for(int i=size(numc)-1;i>=0;i--)
    {
        if(numc[i]!=0) flag=1;
        if(flag==0 && numc[i]==0)
        {
            continue;
        }
        cout << numc[i];
    }
}

int main(void)
{
    string numa,numb; cin >> numa >> numb;

    for(int i=0;i<size(numa)/2;i++)
    {
        char tmp=numa[i];
        numa[i]=numa[size(numa)-1-i];
        numa[size(numa)-1-i]=tmp;
    }
    for(int i=0;i<size(numb)/2;i++)
    {
        char tmp=numb[i];
        numb[i]=numb[size(numb)-1-i];
        numb[size(numb)-1-i]=tmp;
    }
    

    vector<int> numad(size(numa)),numbd(size(numb));
    for(int i=0;i<size(numad);i++)
    {
        numad[i]=numa[i]-'0';
    }
    for(int i=0;i<size(numbd);i++)
    {
        numbd[i]=numb[i]-'0';
    }
    

    add(numad,numbd);

    return 0;
}