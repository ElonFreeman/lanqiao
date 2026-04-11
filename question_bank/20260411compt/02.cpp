#include<bits/stdc++.h>
using namespace std;

struct datast
{
    int n;
    vector<int> arr;
};

int main(void)
{
    int t; cin >> t;
    vector<datast> testset(t);

    for(int i=0;i<t;i++)
    {
        cin >> testset[i].n;
        for(int j=0;j<testset[i].n;j++)
        {
            int input;
            cin >> input;
            testset[i].arr.push_back(input);
        }
    }

    for(int i=0;i<t;i++)
    {
        if(i==t-1)
        {
            int counter=0;
            for(int j=0;j<testset[i].n;j++)
            {
                if(testset[i].arr[j]==j+1)
                {
                    counter++;
                }
            }

            cout << counter;
            break;
        }
        int counter=0;
        for(int j=0;j<testset[i].n;j++)
        {
            if(testset[i].arr[j]==j+1)
            {
                counter++;
            }
        }

        cout << counter << endl;

    }

    return 0;
}