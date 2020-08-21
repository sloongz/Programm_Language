#include <iostream>
#include <string>

using namespace std;

class People {
public:
	virtual void say(string str) = 0;
	People(int age, string name);
protected:
	int m_age;
	string m_name;
};

People::People(int age, string name):m_age(age), m_name(name)
{
}

class Student: public People {
public:
	Student(int age, string name);
	void say(string str);
};

Student::Student(int age, string name):People(age, name)
{
}

void Student::say(string str)
{
	cout<<"student say:"<<endl;
	cout<<"I am "<<m_name<<" "<<m_age<<" years old"<<endl;
	cout<<str<<endl;
}

class Teacher: public People {
public:
	Teacher(int age, string name);
	void say(string str);
};

Teacher::Teacher(int age, string name):People(age, name)
{
}

void Teacher::say(string str)
{
	cout<<"teach say:"<<endl;
	cout<<"I am "<<m_name<<" "<<m_age<<" years old"<<endl;
	cout<<str<<endl;
}

int main()
{
	Student *pstu1 = new Student(20, "xiaoming");
	Teacher *pteach = new Teacher(50, "lilei");

	pstu1->say("hello");
	pteach->say("bye");

	delete pstu1;
	delete pteach;

	return 0;
}
