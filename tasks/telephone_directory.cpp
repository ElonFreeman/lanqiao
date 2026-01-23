using namespace std;
#include<iostream>
#include<cstring>

struct dir
{
    char name[100];
    char ph_num[20];
};

dir dataset1[]=
{
    {"John Smith", "123-456-7890"},
    {"Emma Johnson", "234-567-8901"},
    {"Michael Williams", "345-678-9012"},
    {"Sophia Brown", "456-789-0123"},
    {"William Jones", "567-890-1234"},
    {"Olivia Garcia", "678-901-2345"},
    {"James Miller", "789-012-3456"},
    {"Ava Davis", "890-123-4567"},
    {"Robert Rodriguez", "901-234-5678"},
    {"Isabella Martinez", "012-345-6789"},
    {"David Wilson", "111-222-3333"},
    {"Mia Anderson", "222-333-4444"},
    {"Joseph Taylor", "333-444-5555"},
    {"Charlotte Thomas", "444-555-6666"},
    {"Amelia Hernandez", "555-666-7777"},
    {"end","end"}
};

dir dataset2[]=
{
    {"Benjamin Moore", "666-777-8888"},
    {"Evelyn Martin", "777-888-9999"},
    {"John Smith", "123-456-7890"},
    {"Michael Williams", "345-678-9012"},
    {"William Jones", "567-890-1234"},
    {"Daniel Jackson", "888-999-0000"},
    {"Abigail Thompson", "999-000-1111"},
    {"Alexander White", "000-111-2222"},
    {"James Miller", "789-012-3456"},
    {"David Wilson", "111-222-3333"},
    {"Elizabeth Harris", "111-000-9999"},
    {"Henry Clark", "222-111-8888"},
    {"end","end"}
};

dir main_dir[100]={};

int main()
{
    dir *pds1=nullptr,*pds2=nullptr;
    pds1=dataset1,pds2=dataset2;

    int i=0,j=0;//pds,main_dir
    for(;strcmp((pds1+i)->name,"end")!=0;i++,j++)
    {
        strcpy((main_dir+j)->name,(pds1+i)->name);
        strcpy((main_dir+j)->ph_num,(pds1+i)->ph_num);
    }
    int tmp=j;
    for(i=0;strcmp((pds2+i)->name,"end")!=0;i++)
    {
        int flag=0;
        for(j=0;j<tmp;j++)
        {
            if(strcmp((main_dir+j)->name,(pds2+i)->name)==0)
            {
                flag=1;
            }
        }

        if(flag==1)
        {
            cout << (pds2+i)->name << " " << (pds2+i)->ph_num << endl;
            continue;
        }
        else
        {
            strcpy((main_dir+tmp)->name,(pds2+i)->name);
            strcpy((main_dir+tmp)->ph_num,(pds2+i)->ph_num);
            tmp++;
        }
    }
    strcpy(main_dir[tmp+1].name,"end");
    cout << endl << endl;

    //sort
    
    int compare_by_name(const void *,const void *);
    qsort(main_dir,tmp,sizeof(main_dir[0]),compare_by_name);

    //output
    for(int i=0;strcmp(main_dir[i].name,"end")!=0;i++)
    {
        cout << main_dir[i].name << "  " << main_dir[i].ph_num << endl;
    }

    return 0;
}

int compare_by_name(const void *a,const void *b)
{
    dir *p1=(dir *)a,*p2=(dir *)b;
    return *(p1->name)-*(p2->name);
}