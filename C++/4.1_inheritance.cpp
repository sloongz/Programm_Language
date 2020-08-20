#include <iostream>

using namespace std;

class People {
public:
	void setname(string name);
	void setage(int age);
	string getname();
	int getage();
	void setsex(bool sex);
	bool getsex();
	void show();
protected:
	int m_sex;
private:
	int m_age;
	string m_name;
};

void People::setname(string name)
{
	m_name = name;
}

void People::setage(int age)
{
	m_age = age;
}

void People::setsex(bool sex)
{
	m_sex = sex;
}
string People::getname()
{
	return m_name;
}

int People::getage()
{
	return m_age;
}

bool People::getsex()
{
	return m_sex;
}

void People::show()
{
	cout<<"people show"<<endl;
}

class Student: public People {
public:
	void setscore(float score);
	float getscore();
	void show();
private:
	float m_score;
};

void Student::setscore(float score)
{
	m_score = score;
}

float Student::getscore()
{
	return m_score;
}

void Student::show()
{
	cout<<"student show"<<endl;
}

int main()
{
	Student *pstu1 = new Student;
	
	pstu1->setname("lilei");
	pstu1->setage(10);
	pstu1->setscore(100);
	pstu1->setsex(true);

	cout<<"name: "<<pstu1->getname()<<"\tage: "<<pstu1->getage()<<"\tscore: "<<pstu1->getscore()<<"\tsex: "<<pstu1->getsex()<<endl;

	//名字一样屏蔽基类show
	pstu1->show();
	//使用的是从基类继承来的成员函数
	pstu1->People::show();

	delete pstu1;

	return 0;
}
