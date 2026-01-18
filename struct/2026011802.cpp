using namespace std;
#include<iostream>

union example
{
    int serial;
    char name[10];
    int score;
};

int main()
{
    union example ep1;

    ep1.name[0]='a';
    cout << ep1.name[0] << endl;

    ep1.score=10;
    //cout << ep1.name[0] << endl;
    cout << ep1.score << endl;

    ep1.serial=2;
    cout << ep1.name[0] << endl;
    cout << ep1.score << endl;
    cout << ep1.serial << endl;

    return 0;
}