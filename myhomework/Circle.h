/**********************************************
*  程序名：Circle.h                           *
*  功  能：从Point类派生出圆类(Circle)       *
**********************************************/
#include"point.h"
const double PI=3.14159;
class Circle :public Point
{
private:
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
