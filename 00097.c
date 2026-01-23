#include <stdio.h>

int main()
{
    int N,K;  //N:total nums of elements
    scanf("%d%d",&N,&K);

    int arr[N];//={1,2,3,4,5,6};
    for(int counter=0;counter<N;counter++)
    {
        scanf("%d",&arr[counter]);
    }


    int summary=0,counter=0;

    for(int num=1;num<=N;num++)  //the num of elements
    {
        for(int head=0;head<=N-num;head++)  //head
        {           
            for(int elements=head;elements<=head+num-1;elements++)
            {
                summary+=arr[elements];
            }

            if(summary%K==0)
            {
                counter++;
            }

            summary=0;
        }
    }

    printf("%d",counter);

    return 0;
}