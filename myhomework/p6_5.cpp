/***********************************
* ��������p6_5.cpp                 *
* ��  �ܣ� ��̳еĶ�����          *
***********************************/
#include<iostream>
using   namespace std;
class Car      //С�ͳ���
{
private:
   int power;   //����
   int seat;     //��λ
public:
	Car(int power,int seat)
	{
		this->power=power,this->seat=seat;
	}
	void show()
	{
		cout<<"car power:"<<power<<"  seat:"<<seat<<endl;
	}
};
class Wagon //С������
{
private:
   int power;   //����
   int load;     //װ����
public:
	Wagon(int power,int load)
	{
		this->power=power,this->load=load;
	}
	void show()
	{
		cout<<"wagon power:"<<power<<"  load:"<<load<<endl;
	}
};
class StationWagon :public Car, public Wagon  //�ͻ����ó���
{
public:
	StationWagon(int power, int seat, int load):Wagon(power,load),
Car(power,seat)
	{
	}
	void ShowSW()
    {
      cout<<"StationWagon:"<<endl;
	  Car::show();
	  Wagon::show();
    }
};
int main()
{
   StationWagon SW(105,3,8);
   //SW.show();          //����,���ֶ�����
   SW.ShowSW();
   return 0;
}
