#include<iostream>
using namespace std;

int main(void)
{
    int n=0;
    cin >> n;
    int *box1= new int[n](),*box2= new int[n]();

    for(int i=0;i<n;i++)
    {
        cin >> box1[i];
    }
    for(int i=0;i<n;i++)
    {
        cin >> box2[i];
    }

    
    return 0;
}