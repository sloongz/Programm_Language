#include <stdio.h>

/*
* namespace name{
* 	    //variables, functions, classes
* }
*
*/
class Student {
public:
	char *name;
	int age;
	float score;
	void say() {
		printf("name:%s \tage:%d \tscore:%f\n", name, age, score);
	}
private:
};

namespace AAA {
	int age = 10;
}

namespace BBB {
	int age = 20;
}


using AAA::age;

int main()
{
	Student stu1, stu2, stu3;

	stu1.name = "xiaoming";
	stu1.age = AAA::age;
	stu1.score = 100;

	stu2.name = "lilei";
	stu2.age = BBB::age;
	stu2.score = 100;

	stu3.name = "feier";
	stu3.age = age;
	stu3.score = 100;

	stu1.say();
	stu2.say();
	stu3.say();

	return 0;
}
