/********************************
* 程序名：p6_1.cpp             *
* 功  能：Circle 类的使用      *
********************************/
#include "Circle.h"
using namespace std;
int main()
{
    Circle Cir1(10,100,200);
    Cir1.ShowCircle();
    cout<<"area is:"<<Cir1.area()<<endl;
    Cir1.move(10,20);
    Cir1.ShowXY();
return 0;
}
