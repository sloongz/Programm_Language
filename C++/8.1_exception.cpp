#include <iostream>
#include <string>
#include <exception>

using namespace std;

class Student {
};

void func()
{
	//throw "unkown exception";
	throw Student();
	cout<<"xxx"<<endl;
}

int main()
{
	string str="123456789abcdefgh";

	try {
		char ch2 = str.at(100);
		cout<<ch2<<endl;
	} catch(exception &e) {
		cout<<"exception"<<endl;
	}

	try {
		func();
		cout<<"yyyy"<<endl;
	} catch(const char * &e) {
		cout<<e<<endl;
	} catch(int &e) {
		cout<<"int: "<<e<<endl;
	} catch (Student &e) {
		cout<<"Student"<<endl;
	}

	return 0;
}
