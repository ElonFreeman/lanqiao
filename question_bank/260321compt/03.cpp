#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int t=0;
    cin >> t;
    vector<vector<int>> dataset(t,vector<int>());
    for(int ct=0;ct<t;ct++)
    {
        int n=0;
        cin >> n;
        for(int cn=0;cn<n;cn++)
        {
            int tmp=0;
            cin >> tmp;
            dataset[ct].push_back(tmp);
        }
    }
    
    for(int ct=0;ct<t;ct++)
    {
        /*catigorize*/
        vector<int> odd,even;
        for(int cn=0;cn<size(dataset[ct]);cn++)
        {
            if(dataset[ct][cn]%2==0)
            {
                even.push_back(dataset[ct][cn]);
            }
            else if(dataset[ct][cn]%2!=0)
            {
                odd.push_back(dataset[ct][cn]);
            }
        }

        /*sort*/
        sort(odd.begin(),odd.end(),[](const int a,const int b){return a<b;});
        sort(even.begin(),even.end(),[](const int a,const int b){return a<b;});

        /*output*/
        for(int i=0;i<size(even);i++)
        {
            cout << even.at(i) << ' ';
        }
        for(int i=0;i<size(odd);i++)
        {
            if(i==size(odd)-1)
            {
                cout << odd.at(i);
                break;
            }
            cout << odd.at(i) << ' ';
        }
        cout << endl;
    }

    return 0;
}