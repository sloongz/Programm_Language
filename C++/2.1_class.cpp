#include <iostream>

using namespace std;

class Student {
private:
	char *m_name;
	int m_age;
	float m_score;
public:
	void setname(char *name);
	void setage(int age);
	void setscore(float score);
	void show();
};

void Student::setname(char *name)
{
	m_name = name;
}


void Student::setage(int age)
{
	m_age = age;
}

void Student::setscore(float score)
{
	m_score = score;
}

void Student::show()
{
	cout<<"name:"<<m_name<<"\tage:"<<m_age<<"\tscore:"<<m_score<<endl;
}

int main()
{
	Student stu1;
	Student *stu2 = new Student;

	stu1.setname("lilei");
	stu1.setage(10);
	stu1.setscore(100);

	stu2->setname("xiaoming");
	stu2->setage(20);
	stu2->setscore(99);

	stu1.show();
	stu2->show();

	delete stu2;

	return 0;
}
