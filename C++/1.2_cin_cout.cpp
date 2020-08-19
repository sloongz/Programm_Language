#include <iostream>

using namespace std;

int main()
{
	int x;
	float y;
	float z;
	bool a;

	cout << "Please input an int number:" << endl;
	cin>>x;
	cout<<"The int number is x="<<x<<endl;
	cout<<"Please input a float number and a float number"<<endl;
	cin>>y>>z;
	cout<<"The float number is y=" <<y << " z=" << z <<endl;   

	a = true;
	cout<<"true:"<<a<<endl;
	a = false;
	cout<<"flase:"<<a<<endl;

	return 0;
}
