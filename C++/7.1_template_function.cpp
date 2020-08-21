#include <iostream>

using namespace std;

template<typename T> void Swap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

int main()
{
	int a = 10, b=20;
	Swap(a, b);
	cout<<a<<" "<<b<<endl;

	float f1=10.1, f2=20.2;
	Swap(f1, f2);
	cout<<f1<<" "<<f2<<endl;

	return 0;
}
