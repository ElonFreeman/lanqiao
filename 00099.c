#include <stdio.h>

int main()
{
    char a[60]="96J5A898QA",b[60]="6278A7Q973";
    //scanf("%s",a);
    //scanf("%s",b);

    char table[60],win=0;

    for(int i=0,j=0;i<=58;i+=2,j++)
    {
        int tmpi,tmpj;
        tmpi=i;
        tmpj=j;

        if(a[j]=='\0'||b[j]=='\0')  //判断是否有人出完牌
        {
            table[i]='\0';
            break;
        }


        table[i]=a[j];  //a出牌
        a[j]='\0';
        
        for(int k=0;k<i;k++)  //遍历桌牌，看是否有前列卡牌与a或b当前出牌一致
        {
            if(table[k]==a[j])
            {
                win=1;

                for(;table[i]!=table[k];j++,i--)
                {
                    a[j]=table[i];
                }

                i=tmpi;
            }
        }
        j=tmpj;

        
        table[i+1]=b[j];  //b出牌
        b[j]='\0';

        for(int k=0;k<i;k++)
        {
            if(table[k]==b[j])
            {
                win=1;

                for(;table[i]!=table[k];j++,i--)
                {
                    b[j]=table[i];
                }

                i=tmpi;
            }
        }
        j=tmpj;
    }

    return 0;
}