#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;

int main(void)
{
    int n=3;
    //cin >> n;
    vector<int> nums={5,51,123};
    for(int i=0;i<n;i++)
    {
        //cin >> nums[i];
    }
    
    for(int i=0;i<n;i++)
    {
        vector<int> digitals={};
        int tmp=nums[i];
        for(int j=0;1;j++)
        {
            tmp/=10;
            if(tmp==0)
            {
                digitals.resize(j+1);
                break;
            }
        }
        for(int j=0;j<(digitals.end()-digitals.begin());j++)
        {
            digitals[j]=nums[i]%10;
            nums[i]/=10;
        }

        sort(digitals.begin(),digitals.end());

        int flag=0;
        do
        {
            int sum=0;
            for(int k=0;k<(digitals.end()-digitals.begin());k++)
            {
                sum+=digitals[k]*pow(10,k);
            }

            if(sum%5==0)
            {
                cout << "YES" <<endl;
                flag=1;
                break;
            }

        }while(next_permutation(digitals.begin(),digitals.end()));

        if(flag==0)
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}