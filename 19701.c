#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,remain2,remain4,tmp;
    int i;
    int *dy2=NULL,*dy4=NULL;

    for(num=1;num<=2024;num++)
    {
        tmp=num;
        for(i=0;num>0;i++)  //2
        {
            remain2=num%2;
            num/=2;
        }
        int *dy2=(int *)malloc(i*sizeof(int));

        num=tmp;
        for(i=0;num>0;i++)  //4
        {
            remain4=num%4;
            num/=4;
        }
        int *dy4=(int *)malloc(i*sizeof(int));
    }


}