/***********************************************************
* ��������p6_4.cpp                                         *
* ��  �ܣ�(1)��circle�๫��������Բ����Cylinder            *
*         (2)��ʾ��ļ�����                                *
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
  Point P(1,1);               //Point�����
  Circle Cir(15,20,20);             //Circle�����
  Cylinder CY(15,300,300, 50);    //Cylinder�����
  Point *Pp;                         //point��ָ��
  Pp=&P;                             //����������ַ����ָ������ָ��
  Pp->ShowXY();
  Pp=&Cir;                          //������������ַ����ָ������ָ��
  Pp->ShowXY();
  Pp=&CY;                           //������������ַ����ָ������ָ��
  Pp->ShowXY();
  Circle & RC=CY;                  //Circle��������������Cylinder����
  RC.ShowXY();
  P=Cir;                            //Circle�����ֵ������Point�����
  P.ShowXY();
return 0;
}
