#include <iostream>
#include <string>

using namespace std;

class People {
public:
	People(string name, int age);
	~People();
protected:
	int m_age;
	string m_name;
};

People::People(string name, int age) : m_name(name), m_age(age)
{
	cout<<"People constructor"<<endl;
}

People::~People()
{
	cout<<"People destructor"<<endl;
}

class Student: public People {
public:
	Student(string name, int age, float score);
	~Student();
	void display();
private:
	float m_score;
};

void Student::display()
{
	cout<<"name: "<<m_name<<"\tage: "<<m_age<<"\tscore: "<<m_score<<endl;
}

Student::Student(string name, int age, float score): People(name, age), m_score(score)
{
	cout<<"Student constructor"<<endl;
}

Student::~Student()
{
	cout<<"Student destructor"<<endl;
}

int main()
{
	Student *pstu1 = new Student("xiaoming", 20, 100);

	pstu1->display();

	delete pstu1;

	return 0;
}
