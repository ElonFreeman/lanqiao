#include<bits/stdc++.h>
using namespace std;

double num1=0,num2=0,result=0;
int radixcurrent=10,radix_trans=10;

void add(double num1,double num2)
{

}
void sub(double num1,double num2)
{

}
void multi(double num1,double num2)
{

}
void divi(double num1,double num2)
{

}
void mod(double num1,double num2)
{

}
void change(double *num,int *radixcurrent,int *radix_trans)
{
    vector<double> digitals;
    while(num!=0)
    {
        digitals.push_back((int)num%(*radix_trans));
        *num/=(*radix_trans);
    }
    *radixcurrent=*radix_trans;

}



int main(void)
{
    double n;
    cin >> n;

    for(double i=0;i<n;i++)
    {
        string command;
        cin >> command;
        if(command=="CLEAR")
        {
            num1=num2=0;
        }
        else if(command=="NUM")
        {
            if(num1==0)
            {
                cin >> num1;
            }
            else
            {
                cin >> num2;
            }
        }
        else if(command=="CHANGE")
        {
            cin >> radix_trans;
            if(num1)
            change(&num1,&radixcurrent,&radix_trans);
        }
        else if(command=="ADD")
        {
            scanf("NUM %d",&num2);
            add(num1,num2);
        }
        else if(command=="SUB")
        {
            scanf("NUM %d",&num2);
            add(num1,num2);
        }
        else if(command=="MUL")
        {
            scanf("NUM %d",&num2);
            add(num1,num2);
        }
        else if(command=="DIV")
        {
            scanf("NUM %d",&num2);
            add(num1,num2);
        }
        else if(command=="MOD")
        {
            scanf("NUM %d",&num2);
            add(num1,num2);
        }
        else if(command=="EQUAL")
        {
            cout << result;
        }
    }

    return 0;
}