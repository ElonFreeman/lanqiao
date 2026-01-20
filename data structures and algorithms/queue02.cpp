//by array

using namespace std;
#include<iostream>

int main()
{
    int head=0,tail=-1;
    int elements[100]={};

    tail++;
    while(tail<10)
    {
        *(elements+tail)=tail+1;
        tail++;
    }
    

    
    while(head<10)
    {
        cout << *(elements+head) << " ";
        head++;
    }
    head=0;
    cout << endl;

    //cout << head  << " " << tail <<endl;
    //欲买桂花同载酒，终不似，少年游.

    //enqueue
    while(tail<=15)
    {
        *(elements+tail)=tail+1;
        tail++;
    }
    

    //dequeue
    while(head<5)
    {
        *(elements+head)=0;
        head++;
    }

    //clean queue
    while(head<=tail)
    {
        *(elements+head)=0;
        head++;
    }
    head=0,tail=-1;

    //output queue
    while(head<=(tail-1))
    {
        cout << *(elements+head) << " ";
        head++;
    }
    head=1;
    cout << endl;

    return 0;
}