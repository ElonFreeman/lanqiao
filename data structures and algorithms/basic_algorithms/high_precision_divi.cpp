using namespace std;
#include<iostream>
#include<algorithm>
#define N 1000

void divi(int *A,int b,int *C,int lc)
{
    long long r=0;
    for(int i=lc-1;i>=0;i--)
    {
        r=r*10+A[i];
        C[lc-i-1]=r/b;
        r%=b;
    }

    reverse(C,C+lc);
}

int transf(string a,int *A)
{
    int la,lc;
    //获取数位信息
    la=size(a),lc=la;
    //逆序输入
    for(int i=la-1;i>=0;i--)
    {
        A[la-1-i]=a[i]-'0';//将字符转换为数字，数字和字符之间相差48
    }

    return lc;
}

int main()
{
    void divi(int *,int,int *,int);
    int transf(string,int *);

    int A[N]={},C[N]={},b,lc;
    string a="9876543210123456789";
    cin >> a >> b;

    lc=transf(a,A);
    divi(A,b,C,lc);
    
    //output
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