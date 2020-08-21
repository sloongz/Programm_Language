#include <iostream>
#include <string>
#include <exception>

using namespace std;

void func()
{
	throw "unkown exception";
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
	}

	return 0;
}
