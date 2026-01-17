using namespace std;
#include<iostream>

int *search(int *parr)
{
    while(1)
    {
        if(*(parr)==30)
        {
            return parr;
            break;
        }
        parr++;
    }
}

int main()
{
    int arr[]={10,20,30,40,50,60};
    cout << arr+2 << endl;
    cout << search(arr) << endl;
    return 0;
}