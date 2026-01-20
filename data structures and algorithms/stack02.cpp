//stack push&pop _array

using namespace std;
#include<iostream>



int main()
{
    int elements[100]={};
    int top=-1;

    //push
    //top=0;
    while(top<10)
    {
        elements[top]=top+1;
        top++;
    }
    top--;
    int tmp=top;

    while(top>=0)
    {
        cout << elements[top] << " ";
        top--;
    }
    cout << endl;
    
    //pop
    top=tmp;
    while(top>=0)
    {
        elements[top]=0;
        top--;
    }

    if(top!=-1)
    {
        while(top>=0)
        {
            cout << elements[top] << " ";
            top--;
        }
    }
    else
    {
        cout << "uderflow!";
    }
    cout << endl;

    return 0;
}

