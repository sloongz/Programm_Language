#include <iostream>

using namespace std;

//军队
class Troops{
	public:
		virtual void fight(){ cout<<"Strike back!"<<endl; }
};

//陆军
class Army: public Troops {
	public:
		void fight(){ cout<<"--Army is fighting!"<<endl; }
};

//99A主战坦克
class _99A: public Army {
	public:
		void fight(){ cout<<"----99A(Tank) is fighting!"<<endl; }
};

//空军
class AirForce: public Troops{
	public:
		void fight(){ cout<<"--AirForce is fighting!"<<endl; }
};

//J-20隐形歼击机
class J_20: public AirForce{
	public:
		void fight(){ cout<<"----J-20(Fighter Plane) is fighting!"<<endl; }
};

int main(){
	Troops *p = new Troops;
	p ->fight();
	//陆军
	p = new Army;
	p ->fight();
	p = new _99A;
	p -> fight();
	
	//空军
	p = new AirForce;
	p -> fight();
	p = new J_20;
	p -> fight();

	return 0;
}
