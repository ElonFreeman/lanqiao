#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int num1,num2,num3;
    scanf("%d/%d/%d",&num1,&num2,&num3);

    int dates[3];
    dates[0]=num1*10000+num2*100+num3;
    dates[1]=num3*10000+num1*100+num2;
    dates[2]=num3*10000+num2*100+num1;

    sort(dates,dates+3,[](int a,int b){return a<b;});

    for(int date:dates)
    {
        printf("20%02d-%02d-%02d\n",date/10000,(date/100)%100,date%100);
    }
    
    

    return 0;
}