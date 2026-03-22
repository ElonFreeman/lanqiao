#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int n = 0;
    cin >> n;
    vector<int> arr(n + 1);
    
    //input coefficient
    for(int i = 0; i <= n; i++)
    {
        cin >> arr[i];
    }
    
    bool firstTerm = true;  //mark first term
    
    for(int i = 0; i <= n; i++)
    {
        int coeff = arr[i];
        int power = n - i;
        
        if(coeff == 0) continue;  //if coe is zero ,skip
        
        // 处理符号
        if(firstTerm)
        {
            if(coeff < 0) cout << '-';
            firstTerm = false;
        }
        else
        {
            if(coeff > 0) cout << '+';
            else cout << '-';
        }
        
        // 处理系数（绝对值）
        int absCoeff = abs(coeff);
        
        // 处理常数项
        if(power == 0)
        {
            cout << absCoeff;
            continue;
        }
        
        // 处理系数为1的情况
        if(absCoeff != 1)
        {
            cout << absCoeff;
        }
        
        // 输出变量部分
        cout << 'x';
        if(power > 1)
        {
            cout << '^' << power;
        }
    }
    
    return 0;
}