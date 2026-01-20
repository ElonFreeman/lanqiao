using namespace std;
#include<iostream>

struct toys
{
    int index;
    toys *next;
};

int main()
{
    toys *toy1=new toys,*toy2=new toys,*toy3=new toys,*toy4=new toys,*toy5=new toys,
    *toy6=new toys,*toy7=new toys,*toy8=new toys,*toy9=new toys,*toy10=new toys;

    toy1->index=1,toy2->index=2,toy3->index=3,toy4->index=4,toy5->index=5,
    toy6->index=6,toy7->index=7,toy8->index=8,toy9->index=9,toy10->index=10;

    toy1->next=toy2->next=toy3->next=toy4->next=toy5->next=toy6->next=
    toy7->next=toy8->next=toy9->next=toy10->next=nullptr;

    toy1->next=toy2,toy2->next=toy3,toy3->next=toy4,toy4->next=toy5,toy5->next=toy6,
    toy6->next=toy7,toy7->next=toy8,toy8->next=toy9,toy9->next=toy10,toy10->next=toy1;

    
    int M=5;
    //cin >> M;
    //int *ty=(int *)malloc(M*sizeof(int));
    int ty[5]={3,2,3,4,2};
    for(int i=0;i<M;i++)
    {
        //cin >> ty[i];
    }

    //双指针,记录前驱节点指针域
    toys *current0=toy1;//主指针
    toys *current1=toy10;//前驱指针
    toys *current2=toy2;//后继指针
    toys *head=toy1;//定义头
    toys *tail=toy10;//定义尾

    for(int i=0;i<M;i++)
    {
        if(*(ty+i)==current0->index)
        {
            current1->next=current2;
            current0->next=head;
            head=current0;
            tail=head;
            //tail=current0;

            for(int i=0;i<10;i++)
            {
                toys *tmp=head;
                cout << tmp->index << " ";
                tmp=tmp->next;
            }
            cout << endl;

            continue;
        }

        current0=current0->next;
        current1=current1->next;
        current2=current2->next;
    }

    return 0;
}