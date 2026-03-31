#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int pen_width=0,letter_height=0;
    cin >> pen_width >> letter_height;

    int letter_width=letter_height+pen_width-1;  //字母宽度，即行宽度，为字母高度加笔画宽度减一
    int left=0,right=letter_height+pen_width-2;  //设置每一行的星星的左边界和右边界，使用数组下标标准
    for(int i=0;i<letter_height;i++)  //行遍历，行坐标
    {
        for(int j=0;j<letter_width;j++)  //列遍历，列坐标
        {
            if(j>=i&&j<=i+pen_width-1||j<=right&&j>=right-pen_width+1)  //判断当前位置是否为星星，分为左侧和右侧；左侧：在左边界和左边界加笔画宽度减一之间，右侧类似原理
            {
                cout << '*';
            }
            else  //当前位置不是星星
            {
                cout << '.';
            }
        }
        cout << endl;  //换行

        left++,right--;  //当前行遍历完成，右边界左移，左边界右移，最终左边界到右边去，右边界到左边去
    }


    return 0;
}