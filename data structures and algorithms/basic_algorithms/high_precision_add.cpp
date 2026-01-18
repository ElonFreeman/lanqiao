using namespace std;
#include<iostream>
#define N 1000

void add(int *A,int *B,int *C,int lc)
{
    for(int i=0;i<lc;i++)
    {
        C[i]+=A[i]+B[i];//累加
        C[i+1]=C[i]/10;//进位
        C[i]%=10;//存余
    }

    //处理最高位
    if(C[lc])
    {
        lc++;
    }
}

int main()
{
    int A[N]={},B[N]={},C[N]={},la,lb,lc;
    void add(int*,int*,int*,int);
    string a="9876543210123456789",b="12345678909876543";
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
    
    add(A,B,C,lc);

    for(int i=lc;i>=0;i--)
    {
        cout << C[i];
    }
    cout << endl;
    return 0;
}