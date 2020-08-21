#include <iostream>

using namespace std;

template <class T1, class T2>
class Point {
public:
	Point(T1 x, T2 y): m_x(x), m_y(y){}
	T1 getx() const;
	T2 gety() const;
	void setx(T1 x);
	void sety(T2 y);
private:
	T1 m_x;
	T2 m_y;
};

template <class T1, class T2>
T1 Point<T1, T2>::getx() const 
{
	return m_x;
}

template <class T1, class T2>
T2 Point<T1, T2>::gety() const 
{
	return m_y;
}

template <class T1, class T2>
void Point<T1, T2>::setx(T1 x)
{
	m_x = x;
}


template <class T1, class T2>
void Point<T1, T2>::sety(T2 y)
{
	m_y = y;
}

int main()
{
	Point<int, int> p1(1, 2);
	cout<<"x:"<<p1.getx()<<"\ny:"<<p1.gety()<<endl;

	Point<float, float> p2(10.1, 20.22);
	cout<<"x:"<<p2.getx()<<"\ny:"<<p2.gety()<<endl;

	return 0;
}
