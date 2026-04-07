#include<bits/stdc++.h>
using namespace std;

struct blogdata
{
    int time;
    int id;
};

int main(void)
{
    int n,d,k;cin >> n >> d >> k;  //n：数据组数，d：时间间隔长度，k：赞数
    vector<blogdata> dataset(n);
    for(int i=0;i<n;i++)
    {
        cin >> dataset[i].time >> dataset[i].id;
    }

    /*统计出现的id*/
    vector<int> idlist;
    for(int i=0;i<n;i++)
    {
        int flag=0;
        for(int j=0;j<size(idlist);j++)
        {
            if(dataset[i].id==idlist[j])
            {
                flag=1;
                break;
            }
        }

        if(flag==1)
        {
            continue;
        }
        else
        {
            idlist.push_back(dataset[i].id);
        }
    }

    /*统计时长*/
    
    vector<int> timelen;
    for(int i=0;i<size(idlist);i++)
    {
        int begin=-1,end=-1;
        for(int j=0;j<n;j++)
        {
            if(idlist[i]!=dataset[j].id)
            {
                continue;
            }
            else
            {
               if(begin==-1)
               {
                    begin=dataset[j].time;
               }
               if(begin!=-1 && (dataset[j].time>end && (end=dataset[j].time-begin<d)))
               {
                    end=dataset[j].time;
               }
            }
        }
        
    }


    return 0;
}