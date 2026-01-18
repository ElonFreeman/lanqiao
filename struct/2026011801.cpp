using namespace std;
#include<iostream>

struct example
{
    string name;
    int height;
    int weight;
};

int main()
{
    struct example em1={"aa",180,80},em2={"bb",190,100};
    struct example aem3[3]={{"cc",19,55},{"dd",78,64},{"ee",123,78}};
    struct example *pem1=&em1,*pem2=&em2;
    struct example (*apem)[3]=&aem3;

    cout << em1.name << " " << em1.height << " " << em1.weight << endl;
    cout << em2.name << " " << em2.height << " " << em2.weight << endl;
    cout << endl;

    for(int i=0;i<3;i++)
    {
        cout << aem3[i].name << " " << aem3[i].height << " " << aem3[i].weight << endl;
    }
    cout << endl;

    cout << (*pem1).name << " "  << (*pem1).height << " " << (*pem1).weight << endl;
    cout << pem2->name << " " << pem2->height << " " << pem2->weight << " " << endl;
    cout << endl;

    for(int i=0;i<3;i++)
    {
        cout << aem3[i].name << endl;
    }
    cout << endl;

    for(int i=0;i<3;i++)
    {
       cout << (*(apem+i))->name << endl;
    }
    cout << endl;

    return 0;
}