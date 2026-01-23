using namespace std;
#include<iostream>
#define N 1000

void multi(int *A,int *B,int *C,int lc)
{
    for(int i=0;i<lc;i++)
    {
        for(int j=0;j<lc;j++)
        {
            *(C+i+j)+=(*(A+i))*(*(B+j));
            *(C+i+j+1)+=*(C+i+j)/10;
            *(C+i+j)%=10;
        }
    }
}

int main()
{
    void multi(int*,int*,int*,int);

    int A[N]={},B[N]={},C[N]={},la,lb,lc;
    string a="9876543210123456789",b="12345678909876543";
    cin >> a >> b;

    //获取数位信息
    la=size(a),lb=size(b),lc=la+lb;

    //逆序输入
    for(int i=la-1;i>=0;i--)
    {
        A[la-1-i]=a[i]-'0';//将字符转换为数字，数字和字符之间相差48
    }
    for(int i=lb-1;i>=0;i--)
    {
        B[lb-1-i]=b[i]-'0';
    }

    multi(A,B,C,lc);

    //输出
    while(lc&&*(C+lc)==0)//去除前面的空零
    {
        lc--;
    }
    for(int i=lc;i>=0;i--)
    {
        cout << C[i];
    }
    cout << endl;

    return 0;
}