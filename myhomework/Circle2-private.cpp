#include "Circle2.h"
using namespace std;
int main()
{
    	Circle Cir1(10,100,200);
		Cir1.ShowCircle();
		cout<<"area is:"<<Cir1.area()<<endl;
		Cir1.move(10,20);  //同名覆盖
      
       // Cir1.ShowXY();   //错误，ShowXY()继承为私有成员函数
        return 0;
	
}
