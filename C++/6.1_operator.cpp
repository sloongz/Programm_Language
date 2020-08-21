#include <iostream>

using namespace std;

class Complex {
public:
	Complex(double real=0, double imag=0):m_real(real),m_imag(imag){}
	
	friend Complex operator+(const Complex &c1, const Complex &c2);
	//friend Complex operator-(const Complex &c1, const Complex &c2);
	//friend Complex operator*(const Complex &c1, const Complex &c2);
	//friend Complex operator/(const Complex &c1, const Complex &c2);
	//friend Complex operator==(const Complex &c1, const Complex &c2);
	//friend Complex operator!=(const Complex &c1, const Complex &c2);

	Complex & operator-(const Complex &c);


	friend istream &operator>>(istream &in, Complex & A);
	friend ostream &operator<<(ostream &out, Complex & A);

	double real() { return m_real; }
	double imag() { return m_imag; }
private:
	double m_real;
	double m_imag;
};

Complex operator+(const Complex &c1, const Complex &c2)
{
	Complex c;

	c.m_real = c1.m_real + c2.m_real;
	c.m_imag = c1.m_imag + c2.m_imag;

	return c;
}

Complex & Complex::operator-(const Complex &c)
{
	this->m_real -= c.m_real;
	this->m_imag -= c.m_imag;

	return *this;
}

istream &operator>>(istream &in, Complex & A)
{
	in>>A.m_real>>A.m_imag;
	return in;
}

ostream &operator<<(ostream &out, Complex & A)
{
	out<<A.m_real<<" "<<A.m_imag<<"i";
	return out;
}

int main()
{
	Complex c1(5, 10);
	Complex c2(6, 12);
	Complex c3;

	cin>>c3;
	cout<<"c3: "<<c3<<endl;

	Complex c7 = c1 + c2;
	cout<<"c7 "<<c7.real()<<" "<<c7.imag()<<endl;

	Complex c8 = c2 - c1;
	cout<<"c8 "<<c8.real()<<" "<<c8.imag()<<endl;
	cout<<"c8: "<<c8<<endl;

	return 0;
}
