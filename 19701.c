#include <stdio.h>
#include <stdlib.h>

int tobinary(int num)
{
    int remain2,i,sum2=0;
    int *digi2=(int *)malloc(i*sizeof(int));
   
    for(i=0;num>0;i++)  //2
    {
        remain2=num%2;
        num/=2;
        digi2[i]=remain2;
    }

    for(int j=0;j<=i;j++)
    {
        sum2+=digi2[j];
    }

    return sum2;
}

int toquaternary(int num)
{
    int remain4,i,sum4;
    int *digi4=(int *)malloc(i*sizeof(int));
    
    for(i=0;num>0;i++)  //4
    {
        remain4=num%4;
        num/=4;
        digi4[i]=remain4;
    }

    for(int j=0;j<=i;j++)
    {
        sum4+=digi4[j];
    }

    return sum4;
}

int main()
{
    int num,count=0,sum2,sum4;

    for(num=1;num<=2024;num++)
    {
        //sum2=tobinary(num);
        sum4=toquaternary(num);

        //if(sum2==sum4)
        {
            count++;
        }
    }

    printf("%d",count);

    return 0;
}