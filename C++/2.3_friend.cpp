#include <iostream>

using namespace std;

class Address; //声明Address类

class Student {
private:
	char *m_name;
	int m_age;
	float m_score;
public:
	Student(char *name, int age, float score);
	~Student();
	friend void show(Student *pstu);
	void show1(Address *addr);
};

class Address{
private:
	char *m_province;  //省份
	char *m_city;  //城市
	char *m_district;  //区（市区）
public:
	Address(char *province, char *city, char *district);
	//将Student类中的成员函数show1()声明为友元函数
	friend void Student::show1(Address *addr);
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

void show(Student *pstu)
{
	cout<<"name: "<<pstu->m_name<<"\tage: "<<pstu->m_age<<"\tscore: "<<pstu->m_score<<endl;
}

void Student::show1(Address *addr)
{
	cout<<"name: "<<m_name<<"\tage: "<<m_age<<"\tscore: "<<m_score<<endl;
	cout<<"province: "<<addr->m_province<<"\tcity: "<<addr->m_city<<"\tdistrict: "<<addr->m_district<<endl;	
}

Address::Address(char *province, char *city, char *district)
{
	m_province = province;
	m_city = city;
	m_district = district;
}

int main()
{
	Student stu1("lilei", 10, 100);
	show(&stu1);

	Student *pstu2 = new Student("xiaoming", 20, 99);
	Address *paddr2 = new Address("heibei", "baoding", "bazhou");
	show(pstu2);
	pstu2->show1(paddr2);

	delete pstu2;
	delete paddr2;

	return 0;
}
