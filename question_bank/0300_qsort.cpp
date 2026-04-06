#include<bits/stdc++.h>
using namespace std;

int compare(const void *a,const void *b)  //比较函数：定义比较规则，静态变量，防止被改变
{
    int ia=*((const int*)a),ib=*((const int*)b);  //将静态形参转换为实际类型
    
    /*比较规则：升序：a<b return -1,降序：a<b return 1*/
    if(ia<ib)
        return -1;
    else if(ia>ib)
        return 1;
    else
        return 0;
}

int main(void)
{
    int n;cin >> n;
    vector<int> arr(n);
    for(int &traverse:arr)
    {
        cin >> traverse;
    }

    qsort(&arr[0],arr.size(),sizeof(int),compare);  //参数表：首元素地址，元素数量，单个元素大小，比较函数地址

    for(int i=0;i<n;i++)
    {
        if(i==n-1)
        {
            cout << arr.at(i);
            break;
        }
        cout << arr.at(i) << ' ';
    }

    return 0;
}