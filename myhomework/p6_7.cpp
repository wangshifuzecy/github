/***********************************
* 程序名：p6_7.cpp                 *
* 功  能：虚基类的构造函数         *
***********************************/
#include<iostream>
using   namespace std;
class Automobile              //汽车类
{
private:
   int power;   //马力
public:
	Automobile(int power)
	{
		this->power=power;
		cout<<"Automobile constructing..."<<endl;
	}
	void show()
	{
		cout<<"  power:"<<power;
	}
};
class Car: virtual public Automobile      //小客车类
{
private:
      int seat;     //座位
public:
	Car(int power,int seat):Automobile(power)
	{
		this->seat=seat;
          cout<<"Car constructing..."<<endl;
	}
	void show()
	{
		cout<<"car:";
		Automobile::show();
          cout<<"  seat:"<<seat<<endl;
	}
};
class Wagon: virtual public Automobile //小货车类
{
private:
   int load;     //装载量
public:
	Wagon(int power,int load):Automobile(power)
	{
		this->load=load;
          cout<<"Wagon constructing..."<<endl;
	}
	void show()
	{
		cout<<"wagon:";
		Automobile::show();
          cout<<"  load:"<<load<<endl;
	}
};
class StationWagon :public Car, public Wagon  //客货两用车类
{
public:
	StationWagon(int CPower,int WPower, int seat,int load)
	   :Automobile(CPower),Wagon(WPower,load), Car(CPower,seat)
	{
       cout<<"StationWagon constructing..."<<endl;
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
