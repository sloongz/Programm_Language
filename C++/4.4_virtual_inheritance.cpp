#include <iostream>

using namespace std;

class A {
protected:
	int m_a;
};

class B: virtual public A {  //虚继承
protected:
	int m_b;
};

class C: virtual public A {  //虚继承
protected:
	int m_c;
};

//派生类D
class D: public B, public C {
public:
	void seta(int a){ m_a = a; }  
	void setb(int b){ m_b = b; }  
	void setc(int c){ m_c = c; }  
	void setd(int d){ m_d = d; }  
private:
	int m_d;
};
int main()
{
	D d;
	return 0;
}
