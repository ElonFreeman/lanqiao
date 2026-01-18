using namespace std;
#include<iostream>

double add(double x,double y)
{
    return x+y;
}

double sub(double x,double y)
{
    return x-y;
}

double multi(double x,double y)
{
    return x*y;
}

double divi(double x,double y)
{
    return x/y;
}


int main()
{
    double (*funcs)(double,double)=NULL;
    double add(double,double);
    double x=99999999999999999999,y=7777777777777;
    //cin >> x >> y;

    funcs=add;//指针指向一个函数，指针此时相当于函数，就当成函数一样传参使用
    cout << funcs(x,y) << endl;

    funcs=sub;
    cout << funcs(x,y) << endl;

    funcs=multi;
    cout << funcs(x,y) << endl;

    funcs=divi;
    cout << funcs(x,y) << endl;

    return 0;
}