/****************************************************
* 程序名：p6_2.cpp                                  *
* 功  能：从circle类派生出圆柱类(Cylinder)          *
****************************************************/
#include"point2.h"
const double PI=3.14159;
class Circle :protected Point
{
protected:
	double radius;   //半径
public:
	Circle(double R, int X, int Y):Point(X,Y)
	{
		radius=R;
	}
	double area()   //求面积
	{
		return PI*radius*radius;
    }
	void ShowCircle()
	{
       cout<<"Centre of circle:";
       ShowXY();
       cout<<"radius:"<<radius<<endl;
	}
};
class Cylinder: protected Circle
{
private:
	double height;
public:
    Cylinder(double R, int X, int Y,  double H):Circle(R,X,Y)
	{
		height=H;
	}
	double area()
	{
       return 2*Circle::area()+2*PI*radius*height;
	}
    double volume()
	{
	   return Circle::area()*height;
	}
	void ShowCylinder()
	{
         ShowCircle();
	     cout<<"height of cylinder:"<<height<<endl;
	}
};
int main()
{
    Cylinder CY(10,100,200,50);
	CY.ShowCylinder();
	cout<<"total area:"<<CY.area()<<endl;
	cout<<"volume:"<<CY.volume();
return 0;
}
