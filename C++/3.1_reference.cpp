#include <iostream>

using namespace std;

void swap(int &a, int &b)
{
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}

int main()
{
	int a = 100;
	int &r = a;
	cout<<"a: "<<a<<"\tr: "<<r<<endl;
	cout<<"a addr: "<<&a<<"\tr addr: "<<&r<<endl;

	r=50;
	cout<<"a: "<<a<<"\tr: "<<r<<endl;

	int b = 60;
	swap(a, b);
	cout<<"a: "<<a<<"\tb: "<<b<<endl;

	return 0;
}
