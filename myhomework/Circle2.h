/**********************************************
*  ��������Circle2.h                           *
*  ��  �ܣ���Point��������Բ��(Circle)       *
**********************************************/
#include"point.h"
const double PI=3.14159;
class Circle :private Point
{
private:
	double radius;   //�뾶
public:
	Circle(double R, int X, int Y):Point(X,Y)
	{	
		radius=R;   
	}

	double area()   //�����
	{
		return PI*radius*radius; 
    }
	void ShowCircle()
	{
       cout<<"Centre of circle:";
       ShowXY();
       cout<<"radius:"<<radius<<endl;
	}

	void move(int OffX, int OffY)
	{
		Point::move(OffX,OffY);
	}
	
};
