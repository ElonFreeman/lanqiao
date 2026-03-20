#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int compare(const void *pa,const void *pb)
{
    int a=*((int*)pa),b=*((int*)pb);
    return a-b;
}

struct BIT {
    int n;
    vector<int> tree;
    BIT(int n) : n(n), tree(n + 1, 0) {}
    int lowbit(int x) { return x & -x; }
    void update(int x, int val) {
        for (; x <= n; x += lowbit(x)) tree[x] += val;
    }
    int query(int x) {
        int res = 0;
        for (; x > 0; x -= lowbit(x)) res += tree[x];
        return res;
    }
};

int main(void)
{
    size_t n=5;
    cin >> n;
    vector<int> box1(n),box2(n);
    //vector<int> box1={5,9,3,4,2},box2={8,5,7,6,1};

    for(size_t i=0;i<n;i++)
    {
        cin >> box1[i];
    }
    for(size_t i=0;i<n;i++)
    {
        cin >> box2[i];
    }
    vector<int> box1bu=box1,box2bu=box2;

    
    /*sorting*/
    qsort(&box1[0],n,sizeof(box1[0]),compare);
    qsort(&box2[0],n,sizeof(box2[0]),compare);

    
    /*delete duplicates*/
    box1bu.erase(unique(box1bu.begin(),box1bu.end()),box1bu.end());
    box2bu.erase(unique(box2bu.begin(),box2bu.end()),box2bu.end());

    /*mapping*/
    vector<int> rank1(n);  //box1
    for(size_t i=0;i<n;i++)
    {
        rank1[i]=lower_bound(box1.begin(),box1.end(),box1bu[i])-box1.begin()+1;
    }
    /*for(size_t i=0;i<n;i++)
    {
        cout << rank1[i] << ' ';
    }
    cout << endl;*/

    vector<int> rank2(n);  //box2
    for(size_t i=0;i<n;i++)
    {
        rank2[i]=lower_bound(box2.begin(),box2.end(),box2bu[i])-box2.begin()+1;
    }
    /*for(size_t i=0;i<n;i++)
    {
        cout << rank2[i] << ' ';
    }*/
    
    /*align*/
    vector<int> position(n);
    for(size_t i=1;i<=n;i++)
    {
        position[rank1[i]]=i;
    }

    vector<int> aligned(n);
    for(size_t i=1;i<=n;i++)
    {
        aligned[i]=position[rank2[i]];
    }

    BIT bit(n);
    long long ans=0;
    for(size_t i=0;i<=n;i++)
    {
        bit.update(aligned[i],1);
        ans=(ans+(i-bit.query(aligned[i])))%99999997;
    }

    cout << ans;
    
    return 0;
}