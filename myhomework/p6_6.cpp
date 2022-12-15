/***********************************
* ��������p6_6.cpp                 *
* ��  �ܣ���̳еĶ�����           *
***********************************/
#include<iostream>
using   namespace std;
class Automobile              //������
{
private:
   int power;   //����
public:
	Automobile(int power)
	{
		this->power=power;
	}
	void show()
	{
		cout<<"  power:"<<power;
	}
};
class Car: public Automobile      //С�ͳ���
{
private:
      int seat;     //��λ
public:
	Car(int power,int seat):Automobile(power)
	{
		this->seat=seat;
	}
	void show()
	{
		cout<<"car:";
		Automobile::show();
      cout<<"  seat:"<<seat<<endl;
	}
};
class Wagon: public Automobile //С������
{
private:
   int load;     //װ����
public:
	Wagon(int power,int load):Automobile(power)
	{
		this->load=load;
	}
	void show()
	{
		cout<<"wagon:";
		Automobile::show();
		cout<<"  load:"<<load<<endl;
	}
};
class StationWagon :public Car, public Wagon  //�ͻ����ó���
{
public:
	StationWagon(int CPower, int WPower,int seat,int load)
		:Wagon(WPower,load), Car(CPower,seat)
	{
	}
	void show()
    {
      cout<<"StationWagon:"<<endl;
      Car::show();
      Wagon::show();
    }
};

int main()
{
   StationWagon SW(105,108,3,8);
   SW.show();
return 0;
}
