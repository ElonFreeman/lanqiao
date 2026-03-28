#include<bits/stdc++.h>
using namespace std;

void process(int n,vector<int> weights)
{
    vector<int > red,blue;
    for(int weight:weights)
    {
        if(weight%2!=0)
        {
            red.push_back(weight);
        }
        else if(weight%2==0)
        {
            blue.push_back(weight);
        }
    }

    
    int total_red=0,total_blue=0;
    for(int j=0;j<n;j++)
    {
        int red_max=0,blue_max=0;
        for(int i=0;i<size(red);i++)
        {
            if(red.at(i)>red_max)
                red_max=red.at(i);
        }
        for(int i=0;i<size(blue);i++)
        {
            if(blue.at(i)>blue_max)
                blue_max=blue.at(i);
        }

        total_red+=red_max;
        total_blue+=blue_max;


        red.push_back(blue_max);
        
        blue.push_back(red_max);


    }

}

int main(void)
{
    int n;
    cin >> n;
    vector<int> weights(n);
    for(int &weight:weights)
    {
        cin >> weight;
    }

    process(n,weights);

    return 0;
}