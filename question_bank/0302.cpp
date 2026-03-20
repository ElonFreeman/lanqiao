#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void merg_sort(int *arrA,int *arrB,int n,int m)
{
    vector<int> arrC(n);
    int j=0,k=0;
    for(int i=0;i<n;i++)
    {
        if(j>=m) //A is over
        {
            for(int m=i;m<n;m++)
            {
                arrC[m]=arrB[k];
                k++;
            }
            break;
        }
        if(k>=(n-m))  //B is over
        {
            for(int m=i;m<n;m++)
            {
                arrC[m]=arrA[j];
                j++;
            }
            break;
        }


        if(arrA[j]<arrB[k])
        {
            arrC[i]=arrA[j];
            j++;
        }
        else if(arrA[j]==arrB[k])
        {
            arrC[i]=arrA[j];
            j++;
            arrC[i+1]=arrB[k];
            k++;
            i++;
        }
        else if(arrA[j]>arrB[k])
        {
            arrC[i]=arrB[k];
            k++;
        }
    }

    for(int i=0;i<n;i++)
    {
        if(i==n-1)
        {
            cout << arrC[i];
            break;
        }
        cout << arrC[i] << ' ';
    }
}

int main(void)
{
    int m=6,n=10;
    scanf("%d %d",&n,&m);

    vector<int> arrA(n),arrB(n-m);
    //vector<int> arrA={1,3,4,6,7,8},arrB={1,6,7,9};
    for(int i=0;i<m;i++)
    {
        cin >> arrA[i];
    }
    for(int i=0;i<(n-m);i++)
    {
        cin >> arrB[i];
    }

    merg_sort(&arrA[0],&arrB[0],n,m);

    return 0;
}