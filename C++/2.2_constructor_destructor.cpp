#include <iostream>

using namespace std;

class Student {
private:
	char *m_name;
	int m_age;
	float m_score;
public:
	Student(char *name, int age, float score);
	~Student();
	void show();
};

////采用初始化列表
Student::Student(char *name, int age, float score) : m_name(name),m_age(age),m_score(score)
{
	//m_name = name;
	//m_age = age;
	//m_score = score;
	cout<<"Student: "<<this->m_name<<" constructor"<<endl;
}

Student::~Student()
{
	cout<<"Student: "<<this->m_name<<" destructor"<<endl;
}

void Student::show()
{
	cout<<"name:"<<m_name<<"\tage:"<<m_age<<"\tscore:"<<m_score<<endl;
}


int main()
{
	Student stu1("leilei", 10, 99.9f);
	stu1.show();

	Student *stu2 = new Student("xiaoming", 20, 100);
	stu2->show();

	delete stu2;

	return 0;
}
