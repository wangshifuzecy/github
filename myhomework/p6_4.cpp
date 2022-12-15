/***********************************************************
* 程序名：p6_4.cpp                                         *
* 功  能：(1)从circle类公有派生出圆柱类Cylinder            *
*         (2)演示类的兼容性                                *
***********************************************************/
#include"Circle.h"
class Cylinder: public Circle
{
private:
	 double height;
public:
  Cylinder(double R, int X, int Y, double H):Circle(R,X,Y)
	{
	     height=H;
	}
    void ShowCylinder()
	{
           ShowCircle();
	     cout<<"height of cylinder:"<<height<<endl;
	}
};
int main()
{
  Point P(1,1);               //Point类对象
  Circle Cir(15,20,20);             //Circle类对象
  Cylinder CY(15,300,300, 50);    //Cylinder类对象
  Point *Pp;                         //point类指针
  Pp=&P;                             //将基类对象地址赋给指向基类的指针
  Pp->ShowXY();
  Pp=&Cir;                          //将派生类对象地址赋给指向基类的指针
  Pp->ShowXY();
  Pp=&CY;                           //将派生类对象地址赋给指向基类的指针
  Pp->ShowXY();
  Circle & RC=CY;                  //Circle类引用了派生类Cylinder对象
  RC.ShowXY();
  P=Cir;                            //Circle类对象赋值给基类Point类对象
  P.ShowXY();
return 0;
}
