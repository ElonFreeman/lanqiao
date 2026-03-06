#include <iostream>
using namespace std;

int compare(const void *pa,const void *pb)
{
  int a=*((int*)pa),b=*((int*)pb);
  return a-b;
}

int main()
{
  // 请在此输入您的代码
  int N=0;
  cin >> N;
  int *arr=new int[N]();
  for(int i=0;i<N;i++)
  {
    cin >> arr[i];
  }

  qsort(arr,N,sizeof(arr[0]),compare);

  for(int i=0;i<N;i++)
  {
    if(i==N-1)
    {
      cout << arr[i];
      break;
    }
    cout << arr[i] << ' ';
  }

  return 0;
}