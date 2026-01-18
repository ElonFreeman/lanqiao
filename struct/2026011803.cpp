using namespace std;
#include<iostream>

enum weekdays {mon,tue,wed,thu,fri,sat,sun};

int main()
{
    enum weekdays workdays,weekend;

    workdays=mon,tue,wed;//赋值为第一个值
    weekend=sat,sun;
    cout << workdays << endl << weekend << endl;
    
    for(int i=mon;i<=sun;(enum weekdays)(i++))
    {
        cout << i << endl;

        switch(i)
        {
            case 1 : cout << "m" << endl;break;
        }
    }

    return 0;
}