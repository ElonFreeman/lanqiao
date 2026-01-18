using namespace std;
#include<iostream>
#define N 1000


bool cmp(int *A,int *B,int la,int lb)
{
    if(la>lb)
    {
        return true;
    }
    else if(la<lb)
    {
        return false;
    }
    else if(la==lb)
    {
        for(int i=la-1;i>=0;i--)
        {
            if(*(A+i)>*(B+i))
            {
                return true;
            }
            else if(*(A+i)<*(B+i))
            {
                return false;
            }
            else if(*(A+i)==*(B+i)){}
        }
    }
}

void sub(int *minuend,int *subtrahend,int *C,int lc)
{
    for(int i=0;i<lc;i++)
    {
        if(*(minuend+i)<*(subtrahend+i))
        {
            *(minuend+i)+=10;
            *(minuend+i+1)-=1;
        }

        *(C+i)=*(minuend+i)-*(subtrahend+i);
    }
}


int main()
{
    bool cmp(int *,int *,int,int);
    void sub(int *,int *,int *,int);

    int A[N]={},B[N]={},C[N]={},la,lb,lc;
    //string a="9876543210123456789",b="12345678909876543";
    string a="999",b="1000";

    cin >> a >> b;

    //获取数位信息
    la=size(a),lb=size(b),lc=max(la,lb);

    //逆序输入
    for(int i=la-1;i>=0;i--)
    {
        A[la-1-i]=a[i]-'0';//将字符转换为数字，数字和字符之间相差48
    }
    for(int i=lb-1;i>=0;i--)
    {
        B[lb-1-i]=b[i]-'0';
    }

    //比较
    int comp=cmp(A,B,la,lb);
    int *minuend=nullptr,*subtrahend=nullptr;//被减数、减数
    if(comp==true)//分配被减数和减数
    {
        minuend=A;
        subtrahend=B;
    }
    else if(comp==false)
    {
        minuend=B;
        subtrahend=A;
    }

    sub(minuend,subtrahend,C,lc);

    //输出
    while(lc&&*(C+lc)==0)//去除前面的空零
    {
        lc--;
    }
    if(comp==false)//加负号
    {
        cout << '-';
    }
    for(int i=lc;i>=0;i--)
    {
        cout << C[i];
    }
    cout << endl;

    return 0;
}