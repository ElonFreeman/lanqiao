#include<iostream>
#include<vector>
#include<cstdlib>
using namespace std;

int main(void)
{
    int m=0,n=0,k=0,l=0,d=0;
    scanf("%d %d %d %d %d",&m,&n,&k,&l,&d);

    int *arr=(int*)calloc(d,4*sizeof(int));
    for(int i=0;i<d;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin >> *arr[i][j];
        }
    }

    
    
    return 0;
}